0x714240: push    0FFFFFFFFh
0x714242: push    offset SEH_714240
0x714247: mov     eax, large fs:0
0x71424D: push    eax
0x71424E: sub     esp, 108h
0x714254: mov     eax, ds:0B30AACh
0x714259: xor     eax, esp
0x71425B: mov     [esp+114h+var_10], eax
0x714262: push    ebx
0x714263: push    ebp
0x714264: push    esi
0x714265: push    edi
0x714266: mov     eax, ds:0B30AACh
0x71426B: xor     eax, esp
0x71426D: push    eax; Src
0x71426E: lea     eax, [esp+128h+var_C]
0x714275: mov     large fs:0, eax
0x71427B: lea     eax, [esp+128h+Src]
0x71427F: push    eax
0x714280: mov     ebp, ecx
0x714282: call    sub_7136B0
0x714287: lea     ecx, [esp+128h+var_114]
0x71428B: push    ecx
0x71428C: mov     ecx, ds:0B3FB80h
0x714292: lea     edx, [esp+12Ch+Src]
0x714296: push    edx
0x714297: call    NiTMap_GetAt
0x71429C: test    al, al
0x71429E: jnz     short loc_7142DA
0x7142A0: lea     eax, [esp+128h+Src]
0x7142A4: push    eax; Src
0x7142A5: lea     esi, [ebp+384h]
0x7142AB: push    104h; SizeInBytes
0x7142B0: push    esi; Src
0x7142B1: mov     dword ptr [ebp+380h], 5
0x7142BB: call    _strcpy_s
0x7142C0: push    offset aCannotFindCrea; ": cannot find create function."
0x7142C5: push    104h; SizeInBytes
0x7142CA: push    esi; Dst
0x7142CB: call    _strcat_s
0x7142D0: add     esp, 18h
0x7142D3: xor     al, al
0x7142D5: jmp     loc_71435E
0x7142DA: call    [esp+128h+var_114]
0x7142DE: mov     edi, eax
0x7142E0: test    edi, edi
0x7142E2: mov     [esp+128h+var_114], edi
0x7142E6: jz      short loc_7142F2
0x7142E8: lea     ecx, [edi+4]
0x7142EB: push    ecx; lpAddend
0x7142EC: call    dword ptr ds:0A28078h
0x7142F2: mov     ebx, [ebp+1F8h]
0x7142F8: cmp     ebx, [ebp+1F4h]
0x7142FE: lea     esi, [ebp+1ECh]
0x714304: mov     [esp+128h+var_4], 0
0x71430F: jb      short loc_71431E
0x714311: mov     edx, [esi+14h]
0x714314: add     edx, ebx
0x714316: push    edx
0x714317: mov     ecx, esi
0x714319: call    sub_8BCA30
0x71431E: lea     eax, [esp+128h+var_114]
0x714322: push    eax
0x714323: push    ebx
0x714324: mov     ecx, esi
0x714326: call    sub_8BCD40
0x71432B: test    edi, edi
0x71432D: mov     [esp+128h+var_4], 0FFFFFFFFh
0x714338: jz      short loc_714352
0x71433A: lea     ecx, [edi+4]
0x71433D: push    ecx; lpAddend
0x71433E: call    dword ptr ds:0A2807Ch
0x714344: test    eax, eax
0x714346: jnz     short loc_714352
0x714348: mov     edx, [edi]
0x71434A: mov     eax, [edx]
0x71434C: push    1
0x71434E: mov     ecx, edi
0x714350: call    eax
0x714352: mov     edx, [edi]
0x714354: mov     eax, [edx+1Ch]
0x714357: push    ebp
0x714358: mov     ecx, edi
0x71435A: call    eax
0x71435C: mov     al, 1
0x71435E: mov     ecx, dword ptr [esp+128h+var_C]
0x714365: mov     large fs:0, ecx
0x71436C: pop     ecx
0x71436D: pop     edi
0x71436E: pop     esi
0x71436F: pop     ebp
0x714370: pop     ebx
0x714371: mov     ecx, [esp+114h+var_10]
0x714378: xor     ecx, esp
0x71437A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71437F: add     esp, 114h
0x714385: retn
