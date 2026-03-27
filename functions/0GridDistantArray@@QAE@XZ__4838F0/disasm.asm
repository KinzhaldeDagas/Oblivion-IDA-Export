0x4838F0: push    0FFFFFFFFh
0x4838F2: push    offset ??0GridDistantArray@@QAE@XZ_SEH
0x4838F7: mov     eax, large fs:0
0x4838FD: push    eax
0x4838FE: sub     esp, 8
0x483901: push    ebp
0x483902: push    esi
0x483903: push    edi
0x483904: mov     eax, ds:0B30AACh
0x483909: xor     eax, esp
0x48390B: push    eax
0x48390C: lea     eax, [esp+24h+var_C]
0x483910: mov     large fs:0, eax
0x483916: mov     esi, ecx
0x483918: mov     [esp+24h+var_14], esi
0x48391C: call    sub_481DE0
0x483921: mov     [esp+24h+var_4], 0
0x483929: mov     dword ptr [esi], offset ??_7GridDistantArray@@6B@; const GridDistantArray::`vftable'
0x48392F: call    sub_483320
0x483934: mov     eax, ds:0B06A90h
0x483939: mov     edx, ds:0B06A2Ch
0x48393F: mov     ecx, ds:0B06A98h
0x483945: lea     edi, [edx+eax*2]
0x483948: mov     ds:0B34418h, eax
0x48394D: mov     ds:0B3441Ch, ecx
0x483953: mov     [esi+0Ch], edi
0x483956: imul    edi, edi
0x483959: xor     ecx, ecx
0x48395B: mov     eax, edi
0x48395D: mov     edx, 10h
0x483962: mul     edx
0x483964: seto    cl
0x483967: neg     ecx
0x483969: or      ecx, eax
0x48396B: xor     eax, eax
0x48396D: add     ecx, 4
0x483970: setb    al
0x483973: neg     eax
0x483975: or      eax, ecx
0x483977: push    eax; Size
0x483978: call    FormHeapAlloc
0x48397D: add     esp, 4
0x483980: mov     [esp+24h+var_10], eax
0x483984: test    eax, eax
0x483986: mov     byte ptr [esp+24h+var_4], 1
0x48398B: jz      short loc_4839A7
0x48398D: push    offset sub_483600; a5
0x483992: push    offset sub_6D73E0; a4
0x483997: push    edi; size
0x483998: lea     ebp, [eax+4]
0x48399B: push    10h; a2
0x48399D: push    ebp; a1
0x48399E: mov     [eax], edi
0x4839A0: call    ArrayConstructor
0x4839A5: jmp     short loc_4839A9
0x4839A7: xor     ebp, ebp
0x4839A9: mov     [esi+10h], ebp
0x4839AC: xor     ebp, ebp
0x4839AE: cmp     [esi+0Ch], ebp
0x4839B1: mov     byte ptr [esp+24h+var_4], 0
0x4839B6: jbe     short loc_4839D9
0x4839B8: xor     edi, edi
0x4839BA: cmp     [esi+0Ch], edi
0x4839BD: jbe     short loc_4839D1
0x4839BF: nop
0x4839C0: push    edi
0x4839C1: push    ebp
0x4839C2: mov     ecx, esi
0x4839C4: call    sub_483680
0x4839C9: add     edi, 1
0x4839CC: cmp     edi, [esi+0Ch]
0x4839CF: jb      short loc_4839C0
0x4839D1: add     ebp, 1
0x4839D4: cmp     ebp, [esi+0Ch]
0x4839D7: jb      short loc_4839B8
0x4839D9: mov     edi, ds:0B34424h
0x4839DF: test    edi, edi
0x4839E1: jz      short loc_483A09
0x4839E3: lea     ecx, [edi+4]
0x4839E6: push    ecx; lpAddend
0x4839E7: call    dword ptr ds:0A2807Ch
0x4839ED: test    eax, eax
0x4839EF: jnz     short loc_4839FF
0x4839F1: test    edi, edi
0x4839F3: jz      short loc_4839FF
0x4839F5: mov     edx, [edi]
0x4839F7: mov     eax, [edx]
0x4839F9: push    1
0x4839FB: mov     ecx, edi
0x4839FD: call    eax
0x4839FF: mov     dword ptr ds:0B34424h, 0
0x483A09: mov     ecx, ds:0B06A2Ch
0x483A0F: shl     ecx, 0Ch
0x483A12: test    ecx, ecx
0x483A14: mov     [esp+24h+var_10], ecx
0x483A18: fild    [esp+24h+var_10]
0x483A1C: jge     short loc_483A24
0x483A1E: fadd    dword ptr ds:0A2FC78h
0x483A24: fmul    qword ptr ds:0A2FAA0h
0x483A2A: mov     edx, ds:0B34418h
0x483A30: shl     edx, 0Ch
0x483A33: test    edx, edx
0x483A35: fstp    [esp+24h+var_14]
0x483A39: mov     [esp+24h+var_10], edx
0x483A3D: fld     [esp+24h+var_14]
0x483A41: fild    [esp+24h+var_10]
0x483A45: jge     short loc_483A4D
0x483A47: fadd    dword ptr ds:0A2FC78h
0x483A4D: faddp   st(1), st
0x483A4F: mov     eax, esi
0x483A51: fstp    dword ptr ds:0B34414h
0x483A57: fld     dword ptr ds:0B34414h
0x483A5D: fld     dword ptr ds:0B06AB0h
0x483A63: fld     st
0x483A65: fsubp   st(2), st
0x483A67: fxch    st(1)
0x483A69: fstp    dword ptr ds:0B34410h
0x483A6F: fld     dword ptr ds:0B34410h
0x483A75: fstp    dword ptr ds:0B2C334h
0x483A7B: fstp    dword ptr ds:0B2C338h
0x483A81: mov     ecx, dword ptr [esp+24h+var_C]
0x483A85: mov     large fs:0, ecx
0x483A8C: pop     ecx
0x483A8D: pop     edi
0x483A8E: pop     esi
0x483A8F: pop     ebp
0x483A90: add     esp, 14h
0x483A93: retn
