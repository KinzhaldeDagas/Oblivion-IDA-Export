0x7072E0: push    ecx
0x7072E1: push    esi
0x7072E2: push    edi
0x7072E3: push    400h; Size
0x7072E8: call    FormHeapAlloc
0x7072ED: add     esp, 4
0x7072F0: mov     edi, eax
0x7072F2: xor     esi, esi
0x7072F4: mov     eax, esi
0x7072F6: or      eax, 3F80h
0x7072FB: shl     eax, 10h
0x7072FE: mov     [esp+0Ch+var_4], eax
0x707302: fld     [esp+0Ch+var_4]
0x707306: call    __CIsqrt
0x70730B: fstp    [esp+0Ch+var_4]
0x70730F: fld     [esp+0Ch+var_4]
0x707313: mov     edx, esi
0x707315: fstp    [esp+0Ch+var_4]
0x707319: mov     ecx, [esp+0Ch+var_4]
0x70731D: or      edx, 4000h
0x707323: shl     edx, 10h
0x707326: and     ecx, (offset loc_7FFFFA+5)
0x70732C: mov     [esp+0Ch+var_4], edx
0x707330: fld     [esp+0Ch+var_4]
0x707334: mov     [edi+esi*4], ecx
0x707337: call    __CIsqrt
0x70733C: fstp    [esp+0Ch+var_4]
0x707340: fld     [esp+0Ch+var_4]
0x707344: add     esi, 1
0x707347: fstp    [esp+0Ch+var_4]
0x70734B: mov     eax, [esp+0Ch+var_4]
0x70734F: and     eax, (offset loc_7FFFFA+5)
0x707354: cmp     esi, 80h ; '€'
0x70735A: mov     [edi+esi*4+1FCh], eax
0x707361: jb      short loc_7072F4
0x707363: mov     eax, edi
0x707365: pop     edi
0x707366: pop     esi
0x707367: pop     ecx
0x707368: retn
