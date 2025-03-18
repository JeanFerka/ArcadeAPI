// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2023 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.

#ifndef SFML_KEYBOARD_HPP
#define SFML_KEYBOARD_HPP

// Headers
#include <SFML/Window/Export.hpp>

namespace sf
{
class String;

class SFML_WINDOW_API Keyboard
{
public:
    enum Key
    {
        Unknown = -1, 
        A = 0,        
        B,            
        C,            
        D,            
        E,            
        F,            
        G,            
        H,            
        I,            
        J,            
        K,            
        L,            
        M,            
        N,            
        O,            
        P,            
        Q,            
        R,            
        S,            
        T,            
        U,            
        V,            
        W,            
        X,            
        Y,            
        Z,            
        Num0,         
        Num1,         
        Num2,         
        Num3,         
        Num4,         
        Num5,         
        Num6,         
        Num7,         
        Num8,         
        Num9,         
        Escape,       
        LControl,     
        LShift,       
        LAlt,         
        LSystem,      
        RControl,     
        RShift,       
        RAlt,         
        RSystem,      
        Menu,         
        LBracket,     
        RBracket,     
        Semicolon,    
        Comma,        
        Period,       
        Apostrophe,   
        Slash,        
        Backslash,    
        Grave,        
        Equal,        
        Hyphen,       
        Space,        
        Enter,        
        Backspace,    
        Tab,          
        PageUp,       
        PageDown,     
        End,          
        Home,         
        Insert,       
        Delete,       
        Add,          
        Subtract,     
        Multiply,     
        Divide,       
        Left,         
        Right,        
        Up,           
        Down,         
        Numpad0,      
        Numpad1,      
        Numpad2,      
        Numpad3,      
        Numpad4,      
        Numpad5,      
        Numpad6,      
        Numpad7,      
        Numpad8,      
        Numpad9,      
        F1,           
        F2,           
        F3,           
        F4,           
        F5,           
        F6,           
        F7,           
        F8,           
        F9,           
        F10,          
        F11,          
        F12,          
        F13,          
        F14,          
        F15,          
        Pause,        

        KeyCount,     

        // Deprecated values:
        Tilde     = Grave,     
        Dash      = Hyphen,    
        BackSpace = Backspace, 
        BackSlash = Backslash, 
        SemiColon = Semicolon, 
        Return    = Enter,     
        Quote     = Apostrophe 
    };

    struct Scan
    {
        enum Scancode
        {
            Unknown = -1,       
            A = 0,              
            B,                  
            C,                  
            D,                  
            E,                  
            F,                  
            G,                  
            H,                  
            I,                  
            J,                  
            K,                  
            L,                  
            M,                  
            N,                  
            O,                  
            P,                  
            Q,                  
            R,                  
            S,                  
            T,                  
            U,                  
            V,                  
            W,                  
            X,                  
            Y,                  
            Z,                  
            Num1,               
            Num2,               
            Num3,               
            Num4,               
            Num5,               
            Num6,               
            Num7,               
            Num8,               
            Num9,               
            Num0,               
            Enter,              
            Escape,             
            Backspace,          
            Tab,                
            Space,              
            Hyphen,             
            Equal,              
            LBracket,           
            RBracket,           
            Backslash,          
            Semicolon,          
            Apostrophe,         
            Grave,              
            Comma,              
            Period,             
            Slash,              
            F1,                 
            F2,                 
            F3,                 
            F4,                 
            F5,                 
            F6,                 
            F7,                 
            F8,                 
            F9,                 
            F10,                
            F11,                
            F12,                
            CapsLock,           
            Insert,             
            Home,               
            PageUp,             
            Delete,             
            End,                
            PageDown,           
            Right,              
            Left,               
            Down,               
            Up,                 
            NumLock,            
            NumpadDivide,       
            NumpadMultiply,     
            NumpadMinus,        
            NumpadPlus,         
            NumpadEnter,        
            NumpadDecimal,      

            ScancodeCount       
        };
    };

    typedef Scan::Scancode Scancode;
    static bool isKeyPressed(Key key);
    static bool isKeyPressed(Scancode code);
    static Key localize(Scancode code);
    static Scancode delocalize(Key key);
    static String getDescription(Scancode code);
    static void setVirtualKeyboardVisible(bool visible);
};

} // namespace sf

#endif // SFML_KEYBOARD_HPP
