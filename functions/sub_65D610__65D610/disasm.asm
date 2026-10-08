0x65D610: xor     eax, eax; Clear Combat/Magic/Stealth specialization advance bytes. Normal character level-up does not call this wholesale reset; class/race finalization does.
0x65D612: mov     [ecx+5B8h], ax
0x65D619: mov     [ecx+5BAh], al
0x65D61F: retn
