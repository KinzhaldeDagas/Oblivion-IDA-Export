0x991516: push    eax
0x991517: push    ebx
0x991518: push    ecx
0x991519: mov     eax, [esp+0Ch+arg_6]
0x99151D: xor     eax, 700h
0x991522: test    eax, 700h
0x991527: jnz     loc_9916B0
0x99152D: shr     eax, 0Bh
0x991530: and     eax, 0Fh
0x991533: cmp     byte_B319FC[eax], 0
0x99153A: jz      loc_9916B0
0x991540: mov     eax, [esp+0Ch+arg_6]
0x991544: and     eax, 7FFF0000h
0x991549: cmp     eax, 7FFF0000h
0x99154E: jz      loc_9916B0
0x991554: mov     eax, [esp+0Ch+arg_1E]
0x991558: and     eax, 7FFF0000h
0x99155D: jz      loc_9916B0
0x991563: cmp     eax, 7FFF0000h
0x991568: jz      loc_9916B0
0x99156E: mov     eax, [esp+2Ch]
0x991572: add     eax, eax
0x991574: jnz     loc_9916B0
0x99157A: mov     eax, [esp+14h]
0x99157E: add     eax, eax
0x991580: jnz     loc_9916B0
0x991586: mov     eax, [esp+0Ch+arg_6+2]
0x99158A: and     eax, 7FFFh
0x99158F: add     eax, 3Fh ; '?'
0x991592: mov     ebx, [esp+0Ch+arg_1E+2]
0x991596: and     ebx, 7FFFh
0x99159C: sub     ebx, eax
0x99159E: ja      short loc_9915FE
0x9915A0: mov     eax, [esp+0Ch+arg_6+2]
0x9915A4: and     eax, 7FFFh
0x9915A9: add     eax, 0Ah
0x9915AC: mov     ebx, [esp+0Ch+arg_1E+2]
0x9915B0: and     ebx, 7FFFh
0x9915B6: sub     ebx, eax
0x9915B8: js      loc_9916B0
0x9915BE: fld     tbyte ptr [esp+28h]
0x9915C2: mov     eax, [esp+0Ch+arg_6+2]
0x9915C6: mov     ebx, [esp+0Ch+arg_1E+2]
0x9915CA: and     ebx, 7FFFh
0x9915D0: mov     ecx, ebx
0x9915D2: sub     ebx, eax
0x9915D4: and     ebx, 7
0x9915D7: or      ebx, 4
0x9915DA: sub     ecx, ebx
0x9915DC: mov     ebx, eax
0x9915DE: and     ebx, 8000h
0x9915E4: or      ecx, ebx
0x9915E6: mov     [esp+0Ch+arg_6+2], ecx
0x9915EA: fld     tbyte ptr [esp+10h]
0x9915EE: mov     [esp+0Ch+arg_6+2], eax
0x9915F2: fxch    st(1)
0x9915F4: fprem
0x9915F6: fstp    tbyte ptr [esp+28h]
0x9915FA: fstp    st
0x9915FC: jmp     short loc_9915A0
0x9915FE: test    edx, 2
0x991604: jnz     short loc_99160E
0x991606: fld     tbyte ptr [esp+10h]
0x99160A: fstp    [esp+0Ch+arg_C]
0x99160E: fnstcw  word ptr [esp+0Ch+arg_24]
0x991612: mov     eax, [esp+0Ch+arg_24]
0x991616: or      eax, 33Fh
0x99161B: mov     [esp+0Ch+arg_28], eax
0x99161F: fldcw   word ptr [esp+0Ch+arg_28]
0x991623: mov     eax, [esp+0Ch+arg_6+2]
0x991627: and     eax, 7FFFh
0x99162C: mov     ebx, [esp+0Ch+arg_1E+2]
0x991630: and     ebx, 7FFFh
0x991636: sub     ebx, eax
0x991638: and     ebx, 3Fh
0x99163B: or      ebx, 20h
0x99163E: add     ebx, 1
0x991641: mov     ecx, ebx
0x991643: mov     eax, [esp+0Ch+arg_6+2]
0x991647: mov     ebx, [esp+0Ch+arg_1E+2]
0x99164B: and     ebx, 7FFFh
0x991651: and     eax, 8000h
0x991656: or      ebx, eax
0x991658: mov     [esp+0Ch+arg_6+2], ebx
0x99165C: fld     tbyte ptr [esp+10h]
0x991660: fabs
0x991662: fld     tbyte ptr [esp+28h]
0x991666: fabs
0x991668: fcom    st(1)
0x99166A: fnstsw  ax
0x99166C: and     eax, 100h
0x991671: jnz     short loc_991675
0x991673: fsub    st, st(1)
0x991675: fxch    st(1)
0x991677: fmul    dbl_B31A2C
0x99167D: fxch    st(1)
0x99167F: sub     ecx, 1
0x991682: jnz     short loc_991668
0x991684: mov     ebx, [esp+0Ch+arg_1E+2]
0x991688: fstp    tbyte ptr [esp+28h]
0x99168C: fstp    st
0x99168E: fld     [esp+0Ch+arg_C]
0x991692: fld     tbyte_B31A34
0x991698: fprem
0x99169A: fstp    st
0x99169C: fld     tbyte ptr [esp+28h]
0x9916A0: fldcw   word ptr [esp+0Ch+arg_24]
0x9916A4: and     ebx, 8000h
0x9916AA: jz      short loc_9916BA
0x9916AC: fchs
0x9916AE: jmp     short loc_9916BA
0x9916B0: fld     tbyte ptr [esp+10h]
0x9916B4: fld     tbyte ptr [esp+28h]
0x9916B8: fprem
0x9916BA: test    edx, 3
0x9916C0: jz      short loc_991718
0x9916C2: fnstsw  word ptr [esp+0Ch+arg_2C]
0x9916C6: test    edx, 1
0x9916CC: jz      short loc_9916ED
0x9916CE: fnstcw  word ptr [esp+0Ch+arg_24]
0x9916D2: mov     eax, [esp+0Ch+arg_24]
0x9916D6: or      eax, 300h
0x9916DB: mov     [esp+0Ch+arg_28], eax
0x9916DF: fldcw   word ptr [esp+0Ch+arg_28]
0x9916E3: fmul    dbl_B31A1C
0x9916E9: fldcw   word ptr [esp+0Ch+arg_24]
0x9916ED: mov     eax, [esp+0Ch+arg_2C]
0x9916F1: fxch    st(1)
0x9916F3: fstp    st
0x9916F5: fld     [esp+0Ch+arg_C]
0x9916F9: fxch    st(1)
0x9916FB: and     eax, 4300h
0x991700: sub     esp, 1Ch
0x991703: fnstenv [esp+28h+var_28]
0x991706: and     [esp+28h+var_24], 0BCFFh
0x99170E: or      [esp+28h+var_24], eax
0x991712: fldenv  [esp+28h+var_28]
0x991715: add     esp, 1Ch
0x991718: pop     ecx
0x991719: pop     ebx
0x99171A: pop     eax
0x99171B: retn
