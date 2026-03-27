0x69E320: mov     eax, [ecx+2Ch]
0x69E323: push    esi
0x69E324: lea     esi, [eax+1]
0x69E327: mov     dl, [eax]
0x69E329: add     eax, 1
0x69E32C: test    dl, dl
0x69E32E: jnz     short loc_69E327
0x69E330: mov     edx, [ecx+1Ch]
0x69E333: sub     eax, esi
0x69E335: mov     esi, eax
0x69E337: mov     eax, [ecx]
0x69E339: mov     eax, [eax+74h]
0x69E33C: push    edx
0x69E33D: push    0
0x69E33F: call    eax
0x69E341: movzx   ecx, ax
0x69E344: lea     eax, [ecx+esi+5]
0x69E348: pop     esi
0x69E349: retn
