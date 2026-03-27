0x72CEC0: movzx   edx, word ptr [ecx+0Ah]
0x72CEC4: push    esi
0x72CEC5: movzx   esi, word ptr [ecx+8]
0x72CEC9: cmp     dx, si
0x72CECC: jnb     short loc_72CEF7
0x72CECE: add     dword ptr [ecx+4], 1
0x72CED2: mov     esi, [ecx+10h]
0x72CED5: movzx   eax, dx
0x72CED8: mov     edx, [ecx+4]
0x72CEDB: cmp     edx, [esi+8]
0x72CEDE: jnb     short loc_72CEEC
0x72CEE0: mov     esi, [esi]
0x72CEE2: movzx   edx, word ptr [esi+edx*2]
0x72CEE6: mov     [ecx+0Ah], dx
0x72CEEA: pop     esi
0x72CEEB: retn
0x72CEEC: mov     edx, 0FFFFh
0x72CEF1: mov     [ecx+0Ah], dx
0x72CEF5: pop     esi
0x72CEF6: retn
0x72CEF7: cmp     dx, si
0x72CEFA: movzx   eax, si
0x72CEFD: jnz     short loc_72CF1F
0x72CEFF: add     dword ptr [ecx+4], 1
0x72CF03: mov     edx, [ecx+4]
0x72CF06: mov     esi, [ecx+10h]
0x72CF09: cmp     edx, [esi+8]
0x72CF0C: jnb     short loc_72CF16
0x72CF0E: mov     esi, [esi]
0x72CF10: movzx   edx, word ptr [esi+edx*2]
0x72CF14: jmp     short loc_72CF1B
0x72CF16: mov     edx, 0FFFFh
0x72CF1B: mov     [ecx+0Ah], dx
0x72CF1F: add     dword ptr [ecx], 1
0x72CF22: mov     edx, [ecx]
0x72CF24: mov     esi, [ecx+0Ch]
0x72CF27: cmp     edx, [esi+8]
0x72CF2A: jnb     short loc_72CF38
0x72CF2C: mov     esi, [esi]
0x72CF2E: movzx   edx, word ptr [esi+edx*2]
0x72CF32: mov     [ecx+8], dx
0x72CF36: pop     esi
0x72CF37: retn
0x72CF38: mov     edx, 0FFFFh
0x72CF3D: mov     [ecx+8], dx
0x72CF41: pop     esi
0x72CF42: retn
