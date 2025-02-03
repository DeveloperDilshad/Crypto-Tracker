//
//  CircleButtonViewAnimation.swift
//  SwiftUI Crypto
//
//  Created by Dilshad P on 03/02/25.
//

import SwiftUI

struct CircleButtonViewAnimation: View {
    
    @Binding var animate:Bool
    
    var body: some View {
        Circle()
            .stroke(lineWidth: 5.0)
            .scaleEffect(animate ? 1.0 : 0.0)
            .opacity(animate ? 0.0 : 1.0)
            .animation(animate ? .easeInOut(duration: 1.0) : .none, value: animate)
            .onAppear{
                animate.toggle()
            }
    }
}

#Preview {
    CircleButtonViewAnimation(animate: .constant(false))
        .foregroundStyle(Color.red)
        .frame(width: 100,height: 100)
}
