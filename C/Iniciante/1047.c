#include <stdio.h>

int main(void) {
    int h_init, h_end; 
    int m_init, m_end;
    int h_total, m_total;

    scanf("%d %d %d %d", &h_init, &m_init, &h_end, &m_end);

    h_total = h_end - h_init;
    m_total = m_end - m_init;

    if(h_total < 0) {
        h_total = 24 + (h_end - h_init);
    }

    if(m_total < 0) {
        m_total = 60 + (m_end - m_init);
        h_total--;
    }

    if((h_end == h_init) && (m_end == m_init)) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_total, m_total);
    }
    
    return 0;
}