0x5442A0: push    0FFFFFFFFh
0x5442A2: push    offset ??0Stars@@QAE@XZ_SEH
0x5442A7: mov     eax, large fs:0
0x5442AD: push    eax
0x5442AE: push    ecx
0x5442AF: push    esi
0x5442B0: push    edi
0x5442B1: mov     eax, ds:0B30AACh
0x5442B6: xor     eax, esp
0x5442B8: push    eax
0x5442B9: lea     eax, [esp+1Ch+var_C]
0x5442BD: mov     large fs:0, eax
0x5442C3: mov     esi, ecx
0x5442C5: mov     [esp+1Ch+var_10], esi
0x5442C9: call    ??0SkyObject@@QAE@XZ; SkyObject::SkyObject(void)
0x5442CE: mov     dword ptr [esi], offset ??_7Stars@@6B@; const Stars::`vftable'
0x5442D4: mov     [esp+1Ch+var_4], 0
0x5442DC: mov     dword ptr [esi+8], 0
0x5442E3: mov     edi, [esi+8]
0x5442E6: test    edi, edi
0x5442E8: mov     byte ptr [esp+1Ch+var_4], 1
0x5442ED: jz      short loc_544312
0x5442EF: lea     eax, [edi+4]
0x5442F2: push    eax; lpAddend
0x5442F3: call    dword ptr ds:0A2807Ch
0x5442F9: test    eax, eax
0x5442FB: jnz     short loc_54430B
0x5442FD: test    edi, edi
0x5442FF: jz      short loc_54430B
0x544301: mov     edx, [edi]
0x544303: mov     eax, [edx]
0x544305: push    1
0x544307: mov     ecx, edi
0x544309: call    eax
0x54430B: mov     dword ptr [esi+8], 0
0x544312: fldz
0x544314: mov     eax, esi
0x544316: fstp    dword ptr [esi+0Ch]
0x544319: mov     ecx, dword ptr [esp+1Ch+var_C]
0x54431D: mov     large fs:0, ecx
0x544324: pop     ecx
0x544325: pop     edi
0x544326: pop     esi
0x544327: add     esp, 10h
0x54432A: retn
