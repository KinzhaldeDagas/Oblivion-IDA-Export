0x452430: push    esi
0x452431: mov     esi, [esp+4+arg_0]
0x452435: fld     dword ptr [esi]
0x452437: sub     esp, 8
0x45243A: fstp    [esp+0Ch+X]; X
0x45243D: call    __finite
0x452442: add     esp, 8
0x452445: test    eax, eax
0x452447: jz      short loc_4524B7
0x452449: fld     dword ptr [esi+4]
0x45244C: sub     esp, 8
0x45244F: fstp    [esp+0Ch+X]; X
0x452452: call    __finite
0x452457: add     esp, 8
0x45245A: test    eax, eax
0x45245C: jz      short loc_4524B7
0x45245E: fld     dword ptr [esi+8]
0x452461: sub     esp, 8
0x452464: fstp    [esp+0Ch+X]; X
0x452467: call    __finite
0x45246C: add     esp, 8
0x45246F: test    eax, eax
0x452471: jz      short loc_4524B7
0x452473: fld     dword ptr [esi]
0x452475: sub     esp, 8
0x452478: fstp    [esp+0Ch+X]; X
0x45247B: call    __isnan
0x452480: add     esp, 8
0x452483: test    eax, eax
0x452485: jnz     short loc_4524B7
0x452487: fld     dword ptr [esi+4]
0x45248A: sub     esp, 8
0x45248D: fstp    [esp+0Ch+X]; X
0x452490: call    __isnan
0x452495: add     esp, 8
0x452498: test    eax, eax
0x45249A: jnz     short loc_4524B7
0x45249C: fld     dword ptr [esi+8]
0x45249F: sub     esp, 8
0x4524A2: fstp    [esp+0Ch+X]; X
0x4524A5: call    __isnan
0x4524AA: add     esp, 8
0x4524AD: test    eax, eax
0x4524AF: jnz     short loc_4524B7
0x4524B1: xor     al, al
0x4524B3: pop     esi
0x4524B4: retn    4
0x4524B7: mov     al, 1
0x4524B9: pop     esi
0x4524BA: retn    4
