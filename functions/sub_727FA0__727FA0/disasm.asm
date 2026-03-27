0x727FA0: mov     edx, [esp+arg_0]
0x727FA4: test    edx, edx
0x727FA6: jnz     short loc_727FAD
0x727FA8: xor     al, al
0x727FAA: retn    4
0x727FAD: mov     eax, [ecx+10h]
0x727FB0: cmp     eax, [edx+10h]
0x727FB3: jnz     short loc_727FA8
0x727FB5: cmp     eax, 4
0x727FB8: mov     edx, [edx+0Ch]
0x727FBB: mov     ecx, [ecx+0Ch]
0x727FBE: push    esi
0x727FBF: push    edi
0x727FC0: jb      short loc_727FD6
0x727FC2: mov     esi, [ecx]
0x727FC4: cmp     esi, [edx]
0x727FC6: jnz     short loc_727FDA
0x727FC8: sub     eax, 4
0x727FCB: add     edx, 4
0x727FCE: add     ecx, 4
0x727FD1: cmp     eax, 4
0x727FD4: jnb     short loc_727FC2
0x727FD6: test    eax, eax
0x727FD8: jz      short loc_72803F
0x727FDA: movzx   esi, byte ptr [ecx]
0x727FDD: movzx   edi, byte ptr [edx]
0x727FE0: sub     esi, edi
0x727FE2: jnz     short loc_728029
0x727FE4: sub     eax, 1
0x727FE7: add     edx, 1
0x727FEA: add     ecx, 1
0x727FED: test    eax, eax
0x727FEF: jz      short loc_72803F
0x727FF1: movzx   esi, byte ptr [ecx]
0x727FF4: movzx   edi, byte ptr [edx]
0x727FF7: sub     esi, edi
0x727FF9: jnz     short loc_728029
0x727FFB: sub     eax, 1
0x727FFE: add     edx, 1
0x728001: add     ecx, 1
0x728004: test    eax, eax
0x728006: jz      short loc_72803F
0x728008: movzx   esi, byte ptr [ecx]
0x72800B: movzx   edi, byte ptr [edx]
0x72800E: sub     esi, edi
0x728010: jnz     short loc_728029
0x728012: sub     eax, 1
0x728015: add     edx, 1
0x728018: add     ecx, 1
0x72801B: test    eax, eax
0x72801D: jz      short loc_72803F
0x72801F: movzx   esi, byte ptr [ecx]
0x728022: movzx   eax, byte ptr [edx]
0x728025: sub     esi, eax
0x728027: jz      short loc_72803F
0x728029: test    esi, esi
0x72802B: mov     eax, 1
0x728030: jg      short loc_728041
0x728032: or      eax, 0FFFFFFFFh
0x728035: test    eax, eax
0x728037: pop     edi
0x728038: setz    al
0x72803B: pop     esi
0x72803C: retn    4
0x72803F: xor     eax, eax
0x728041: test    eax, eax
0x728043: pop     edi
0x728044: setz    al
0x728047: pop     esi
0x728048: retn    4
