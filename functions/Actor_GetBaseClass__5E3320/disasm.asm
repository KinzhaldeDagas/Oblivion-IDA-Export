0x5E3320: push    esi
0x5E3321: mov     esi, ecx
0x5E3323: call    Actor_IsNPC
0x5E3328: test    al, al
0x5E332A: jz      short loc_5E3344
0x5E332C: mov     eax, [esi]
0x5E332E: mov     edx, [eax+170h]
0x5E3334: mov     ecx, esi
0x5E3336: call    edx
0x5E3338: test    eax, eax
0x5E333A: jz      short loc_5E3344
0x5E333C: mov     eax, [eax+104h]
0x5E3342: pop     esi
0x5E3343: retn
0x5E3344: xor     eax, eax
0x5E3346: pop     esi
0x5E3347: retn
