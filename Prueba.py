import tkinter as tk
from tkinter import ttk
from PIL import Image, ImageTk

class MentalHealthApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Sistema de Detección de Trastornos Mentales")
        self.root.geometry("1400x800")
        self.root.configure(bg="#1a1a2e")
        
        # Centrar ventana
        self.center_window()
        
        # Container principal con gradiente simulado
        self.main_container = tk.Frame(root, bg="#1a1a2e")
        self.main_container.pack(fill=tk.BOTH, expand=True)
        
        self.create_interface()
        
    def center_window(self):
        self.root.update_idletasks()
        width = self.root.winfo_width()
        height = self.root.winfo_height()
        x = (self.root.winfo_screenwidth() // 2) - (width // 2)
        y = (self.root.winfo_screenheight() // 2) - (height // 2)
        self.root.geometry(f'{width}x{height}+{x}+{y}')
    
    def create_interface(self):
        # Header
        header = tk.Frame(self.main_container, bg="#16213e", height=100)
        header.pack(fill=tk.X)
        header.pack_propagate(False)
        
        # Logo izquierdo
        left_logo_container = tk.Frame(header, bg="#16213e", width=80, height=80)
        left_logo_container.place(x=40, y=10)
        left_logo_container.pack_propagate(False)
        
        left_logo = tk.Label(left_logo_container, text="ISI", 
                            font=("Arial", 18, "bold"),
                            bg="#0f3460", fg="#e94560",
                            relief=tk.FLAT)
        left_logo.pack(fill=tk.BOTH, expand=True)
        
        # Título principal
        title_frame = tk.Frame(header, bg="#16213e")
        title_frame.place(relx=0.5, rely=0.5, anchor=tk.CENTER)
        
        main_title = tk.Label(title_frame,
                             text="SISTEMA DE DETECCIÓN DE TRASTORNOS MENTALES",
                             font=("Segoe UI", 24, "bold"),
                             bg="#16213e", fg="#ffffff")
        main_title.pack()
        
        subtitle = tk.Label(title_frame,
                          text="Centro Universitario UAEM Nezahualcóyotl • Ingeniería en Sistemas Inteligentes",
                          font=("Segoe UI", 11),
                          bg="#16213e", fg="#a8b2c5")
        subtitle.pack(pady=(5, 0))
        
        # Logo derecho
        right_logo_container = tk.Frame(header, bg="#16213e", width=80, height=80)
        right_logo_container.place(relx=1, x=-120, y=10)
        right_logo_container.pack_propagate(False)
        
        right_logo = tk.Label(right_logo_container, text="UAEM",
                             font=("Arial", 14, "bold"),
                             bg="#0f3460", fg="#e94560",
                             relief=tk.FLAT)
        right_logo.pack(fill=tk.BOTH, expand=True)
        
        # Contenido principal
        content = tk.Frame(self.main_container, bg="#1a1a2e")
        content.pack(fill=tk.BOTH, expand=True, padx=60, pady=40)
        
        # Sección izquierda - Cards de información
        left_section = tk.Frame(content, bg="#1a1a2e")
        left_section.pack(side=tk.LEFT, fill=tk.BOTH, expand=True, padx=(0, 30))
        
        # Card 1 - Principal
        self.create_card(left_section,
                        "¿Qué son los Trastornos Mentales?",
                        "Condiciones que afectan el pensamiento, emociones y comportamiento de una persona. "
                        "Incluyen depresión, ansiedad, esquizofrenia, trastorno bipolar y TDAH.",
                        "#e94560", 0, 200)
        
        # Cards inferiores
        bottom_cards = tk.Frame(left_section, bg="#1a1a2e")
        bottom_cards.pack(fill=tk.BOTH, expand=True, pady=(20, 0))
        
        # Card 2
        self.create_card(bottom_cards,
                        "Diagnóstico Inteligente",
                        "Sistema experto basado en conocimientos para evaluación precisa y personalizada.",
                        "#533483", tk.LEFT, 150, side=True)
        
        # Card 3
        self.create_card(bottom_cards,
                        "Apoyo Profesional",
                        "Los resultados son orientativos. Consulta con un profesional de la salud mental.",
                        "#16213e", tk.RIGHT, 150, side=True)
        
        # Sección derecha - Imagen y botón
        right_section = tk.Frame(content, bg="#1a1a2e")
        right_section.pack(side=tk.RIGHT, fill=tk.BOTH)
        
        # Container de imagen con efecto
        image_container = tk.Frame(right_section, bg="#16213e", 
                                  width=420, height=420,
                                  relief=tk.FLAT)
        image_container.pack(pady=(0, 30))
        image_container.pack_propagate(False)
        
        # Frame interior con borde
        inner_frame = tk.Frame(image_container, bg="#0f3460",
                              width=400, height=400)
        inner_frame.place(relx=0.5, rely=0.5, anchor=tk.CENTER)
        inner_frame.pack_propagate(False)
        
        # Placeholder imagen
        img_placeholder = tk.Label(inner_frame,
                                  text="🧠\n\nCEREBRO\n\nSalud Mental",
                                  font=("Segoe UI", 28),
                                  bg="#0f3460", fg="#e94560",
                                  justify=tk.CENTER)
        img_placeholder.pack(fill=tk.BOTH, expand=True)
        
        # Botón principal
        button_container = tk.Frame(right_section, bg="#1a1a2e")
        button_container.pack()
        
        self.test_button = tk.Button(button_container,
                                     text="INICIAR EVALUACIÓN",
                                     font=("Segoe UI", 18, "bold"),
                                     bg="#e94560", fg="#ffffff",
                                     activebackground="#d63651",
                                     activeforeground="#ffffff",
                                     relief=tk.FLAT,
                                     bd=0,
                                     padx=60, pady=20,
                                     cursor="hand2",
                                     command=self.start_test)
        self.test_button.pack()
        
        # Efectos hover del botón
        self.test_button.bind("<Enter>", lambda e: self.button_hover(True))
        self.test_button.bind("<Leave>", lambda e: self.button_hover(False))
        
        # Info adicional
        info_label = tk.Label(button_container,
                            text="Evaluación profesional • Confidencial • Resultados inmediatos",
                            font=("Segoe UI", 9),
                            bg="#1a1a2e", fg="#6c7a89")
        info_label.pack(pady=(15, 0))
        
        # Footer
        self.create_footer()
    
    def create_card(self, parent, title, description, color, side, height=None, side_pack=False):
        card = tk.Frame(parent, bg=color, relief=tk.FLAT)
        
        if side_pack:
            card.pack(side=side, fill=tk.BOTH, expand=True, padx=5)
        else:
            card.pack(fill=tk.X, pady=(0, 0))
        
        if height:
            card.config(height=height)
            card.pack_propagate(False)
        
        # Padding interno
        content = tk.Frame(card, bg=color)
        content.pack(fill=tk.BOTH, expand=True, padx=25, pady=20)
        
        # Título
        title_label = tk.Label(content,
                              text=title,
                              font=("Segoe UI", 14, "bold"),
                              bg=color, fg="#ffffff",
                              justify=tk.LEFT)
        title_label.pack(anchor="w")
        
        # Descripción
        desc_label = tk.Label(content,
                             text=description,
                             font=("Segoe UI", 10),
                             bg=color, fg="#e0e0e0",
                             justify=tk.LEFT,
                             wraplength=400 if not side_pack else 280)
        desc_label.pack(anchor="w", pady=(8, 0))
    
    def create_footer(self):
        footer = tk.Frame(self.main_container, bg="#16213e", height=50)
        footer.pack(side=tk.BOTTOM, fill=tk.X)
        footer.pack_propagate(False)
        
        footer_text = tk.Label(footer,
                              text="© 2024 UAEM Nezahualcóyotl • Sistema de Apoyo Diagnóstico",
                              font=("Segoe UI", 9),
                              bg="#16213e", fg="#6c7a89")
        footer_text.pack(expand=True)
    
    def button_hover(self, entering):
        if entering:
            self.test_button.config(bg="#ff5574")
        else:
            self.test_button.config(bg="#e94560")
    
    def start_test(self):
        print("Iniciando evaluación...")
        # Aquí va la lógica del test

def main():
    root = tk.Tk()
    app = MentalHealthApp(root)
    root.mainloop()

if __name__ == "__main__":
    main()