0x99CA39: xor     eax, eax
0x99CA3B: mov     ecx, large fs:0
0x99CA42: cmp     dword ptr [ecx+4], offset __unwind_handler
0x99CA49: jnz     short __abnormal_termination____at_done
0x99CA4B: mov     edx, [ecx+0Ch]
0x99CA4E: mov     edx, [edx+0Ch]
0x99CA51: cmp     [ecx+8], edx
0x99CA54: jnz     short __abnormal_termination____at_done
0x99CA56: mov     eax, 1
