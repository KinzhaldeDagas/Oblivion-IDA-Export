0x6FAE60: fld     dword ptr [ecx]
0x6FAE62: mov     edx, [esp+arg_0]
0x6FAE66: fld     dword ptr [edx]
0x6FAE68: fucompp
0x6FAE6A: fnstsw  ax
0x6FAE6C: test    ah, 44h
0x6FAE6F: jp      short loc_6FAEB2
0x6FAE71: fld     dword ptr [ecx+4]
0x6FAE74: fld     dword ptr [edx+4]
0x6FAE77: fucompp
0x6FAE79: fnstsw  ax
0x6FAE7B: test    ah, 44h
0x6FAE7E: jp      short loc_6FAEB2
0x6FAE80: fld     dword ptr [ecx+8]
0x6FAE83: fld     dword ptr [edx+8]
0x6FAE86: fucompp
0x6FAE88: fnstsw  ax
0x6FAE8A: test    ah, 44h
0x6FAE8D: jp      short loc_6FAEB2
0x6FAE8F: mov     al, [ecx+0Eh]
0x6FAE92: cmp     al, [edx+0Eh]
0x6FAE95: jnz     short loc_6FAEB2
0x6FAE97: mov     cx, [ecx+0Ch]
0x6FAE9B: cmp     cx, [edx+0Ch]
0x6FAE9F: jnz     short loc_6FAEB2
0x6FAEA1: mov     eax, 1
0x6FAEA6: xor     edx, edx
0x6FAEA8: test    al, al
0x6FAEAA: setz    dl
0x6FAEAD: mov     al, dl
0x6FAEAF: retn    4
0x6FAEB2: xor     eax, eax
0x6FAEB4: xor     edx, edx
0x6FAEB6: test    al, al
0x6FAEB8: setz    dl
0x6FAEBB: mov     al, dl
0x6FAEBD: retn    4
