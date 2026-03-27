0x6B7050: mov     eax, ds:0B333A0h
0x6B7055: mov     eax, [eax+5Ch]
0x6B7058: sub     esp, 8
0x6B705B: test    eax, eax
0x6B705D: push    esi
0x6B705E: jz      loc_6B710E
0x6B7064: mov     edx, [ecx+34h]
0x6B7067: test    edx, edx
0x6B7069: jz      short loc_6B707B
0x6B706B: mov     esi, [eax+10h]
0x6B706E: test    esi, esi
0x6B7070: jz      short loc_6B707B
0x6B7072: test    [esi+53h], dl
0x6B7075: jz      loc_6B7105
0x6B707B: fld     dword ptr [eax+0D0h]
0x6B7081: fstp    [esp+0Ch+var_4]
0x6B7085: fld     dword ptr [ecx+30h]
0x6B7088: fsub    dword ptr [ecx+2Ch]
0x6B708B: fstp    [esp+0Ch+var_8]
0x6B708F: fld     [esp+0Ch+var_8]
0x6B7093: fabs
0x6B7095: fstp    [esp+0Ch+var_8]
0x6B7099: fld     [esp+0Ch+var_8]
0x6B709D: fcomp   dword ptr ds:0A771F0h
0x6B70A3: fnstsw  ax
0x6B70A5: test    ah, 1
0x6B70A8: jnz     short loc_6B710E
0x6B70AA: fld     dword ptr [ecx+2Ch]
0x6B70AD: fld     dword ptr [ecx+30h]
0x6B70B0: fcompp
0x6B70B2: fnstsw  ax
0x6B70B4: fld     [esp+0Ch+var_4]
0x6B70B8: test    ah, 41h
0x6B70BB: jnz     short loc_6B70D5
0x6B70BD: fld     dword ptr [ecx+2Ch]
0x6B70C0: fcomp   st(1)
0x6B70C2: fnstsw  ax
0x6B70C4: test    ah, 41h
0x6B70C7: jz      short loc_6B7103
0x6B70C9: fld     dword ptr [ecx+30h]
0x6B70CC: fcomp   st(1)
0x6B70CE: fnstsw  ax
0x6B70D0: test    ah, 5
0x6B70D3: jnp     short loc_6B7103
0x6B70D5: fld     dword ptr [ecx+2Ch]
0x6B70D8: fld     dword ptr [ecx+30h]
0x6B70DB: fcompp
0x6B70DD: fnstsw  ax
0x6B70DF: test    ah, 5
0x6B70E2: jp      short loc_6B710C
0x6B70E4: fld     dword ptr [ecx+2Ch]
0x6B70E7: fcomp   st(1)
0x6B70E9: fnstsw  ax
0x6B70EB: test    ah, 41h
0x6B70EE: jnz     short loc_6B710C
0x6B70F0: fld     dword ptr [ecx+30h]
0x6B70F3: fcompp
0x6B70F5: fnstsw  ax
0x6B70F7: test    ah, 5
0x6B70FA: jp      short loc_6B710E
0x6B70FC: xor     al, al
0x6B70FE: pop     esi
0x6B70FF: add     esp, 8
0x6B7102: retn
0x6B7103: fstp    st
0x6B7105: xor     al, al
0x6B7107: pop     esi
0x6B7108: add     esp, 8
0x6B710B: retn
0x6B710C: fstp    st
0x6B710E: mov     al, 1
0x6B7110: pop     esi
0x6B7111: add     esp, 8
0x6B7114: retn
