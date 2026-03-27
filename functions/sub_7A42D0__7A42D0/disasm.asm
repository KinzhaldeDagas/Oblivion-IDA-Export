0x7A42D0: push    ebp
0x7A42D1: mov     ebp, esp
0x7A42D3: and     esp, 0FFFFFFF8h
0x7A42D6: push    0FFFFFFFFh
0x7A42D8: push    offset SEH_7A42D0
0x7A42DD: mov     eax, large fs:0
0x7A42E3: push    eax
0x7A42E4: sub     esp, 60h
0x7A42E7: push    ebx
0x7A42E8: push    esi
0x7A42E9: push    edi
0x7A42EA: mov     eax, ds:0B30AACh
0x7A42EF: xor     eax, esp
0x7A42F1: push    eax
0x7A42F2: lea     eax, [esp+7Ch+var_C]
0x7A42F6: mov     large fs:0, eax
0x7A42FC: mov     esi, ecx
0x7A42FE: mov     [esp+7Ch+var_6C], esi
0x7A4302: mov     ebx, [ebp+arg_0]
0x7A4305: mov     ecx, ebx
0x7A4307: mov     [esp+7Ch+var_68], 0
0x7A430F: call    sub_78EB40
0x7A4314: mov     [esi+0C0h], eax
0x7A431A: mov     eax, [esi+0D4h]
0x7A4320: test    eax, eax
0x7A4322: jz      short loc_7A4341
0x7A4324: mov     ecx, [eax-4]
0x7A4327: lea     edi, [eax-4]
0x7A432A: push    offset sub_794EB0; void (__thiscall *)(void *)
0x7A432F: push    ecx; int
0x7A4330: push    10h; unsigned int
0x7A4332: push    eax; void *
0x7A4333: call    $LN21
0x7A4338: push    edi
0x7A4339: call    FormHeapFree
0x7A433E: add     esp, 4
0x7A4341: mov     esi, [esi+0C0h]
0x7A4347: xor     ecx, ecx
0x7A4349: mov     eax, esi
0x7A434B: mov     edx, 10h
0x7A4350: mul     edx
0x7A4352: seto    cl
0x7A4355: neg     ecx
0x7A4357: or      ecx, eax
0x7A4359: xor     eax, eax
0x7A435B: add     ecx, 4
0x7A435E: setb    al
0x7A4361: neg     eax
0x7A4363: or      eax, ecx
0x7A4365: push    eax; Size
0x7A4366: call    FormHeapAlloc
0x7A436B: add     esp, 4
0x7A436E: mov     [esp+7Ch+var_60], eax
0x7A4372: xor     edi, edi
0x7A4374: cmp     eax, edi
0x7A4376: mov     [esp+7Ch+var_4], edi
0x7A437A: jz      short loc_7A4394
0x7A437C: push    offset sub_794EB0; a5
0x7A4381: push    offset sub_6EF4A0; a4
0x7A4386: push    esi; size
0x7A4387: lea     edi, [eax+4]
0x7A438A: push    10h; a2
0x7A438C: push    edi; a1
0x7A438D: mov     [eax], esi
0x7A438F: call    ArrayConstructor
0x7A4394: mov     esi, [esp+7Ch+var_6C]
0x7A4398: mov     ecx, ebx
0x7A439A: mov     [esp+7Ch+var_4], 0FFFFFFFFh
0x7A43A2: mov     [esi+0D4h], edi
0x7A43A8: call    sub_78EB40
0x7A43AD: cmp     eax, 1B59h
0x7A43B2: jz      loc_7A4493
0x7A43B8: mov     [esp+7Ch+var_64], 0
0x7A43C0: mov     ecx, [esp+7Ch+var_68]
0x7A43C4: cmp     ecx, [esi+0C0h]
0x7A43CA: jge     loc_7A44AF
0x7A43D0: cmp     eax, 1B5Ah
0x7A43D5: jnz     loc_7A44FE
0x7A43DB: mov     ecx, ebx
0x7A43DD: call    sub_78EB40
0x7A43E2: cmp     eax, 1B5Bh
0x7A43E7: jz      loc_7A4477
0x7A43ED: lea     ecx, [ecx+0]
0x7A43F0: cmp     eax, 1B5Ch
0x7A43F5: jnz     loc_7A454D
0x7A43FB: push    ebx
0x7A43FC: call    sub_7A8250
0x7A4401: mov     esi, [esi+0D4h]
0x7A4407: add     esi, [esp+80h+var_64]
0x7A440B: add     esp, 4
0x7A440E: mov     ecx, [esi+4]
0x7A4411: test    ecx, ecx
0x7A4413: mov     [esp+7Ch+var_60], eax
0x7A4417: jnz     short loc_7A441D
0x7A4419: xor     edi, edi
0x7A441B: jmp     short loc_7A4425
0x7A441D: mov     edi, [esi+8]
0x7A4420: sub     edi, ecx
0x7A4422: sar     edi, 2
0x7A4425: test    ecx, ecx
0x7A4427: jz      short loc_7A4442
0x7A4429: mov     edx, [esi+0Ch]
0x7A442C: sub     edx, ecx
0x7A442E: sar     edx, 2
0x7A4431: cmp     edi, edx
0x7A4433: jnb     short loc_7A4442
0x7A4435: mov     ecx, [esi+8]
0x7A4438: mov     [ecx], eax
0x7A443A: add     ecx, 4
0x7A443D: mov     [esi+8], ecx
0x7A4440: jmp     short loc_7A4461
0x7A4442: mov     edi, [esi+8]
0x7A4445: cmp     ecx, edi
0x7A4447: jbe     short loc_7A444E
0x7A4449: call    __invalid_parameter_noinfo
0x7A444E: lea     edx, [esp+7Ch+var_60]
0x7A4452: push    edx; int
0x7A4453: push    edi; Src
0x7A4454: push    esi; int
0x7A4455: lea     eax, [esp+88h+var_5C]
0x7A4459: push    eax; int
0x7A445A: mov     ecx, esi
0x7A445C: call    sub_7A3620
0x7A4461: mov     ecx, ebx
0x7A4463: call    sub_78EB40
0x7A4468: cmp     eax, 1B5Bh
0x7A446D: mov     esi, [esp+7Ch+var_6C]
0x7A4471: jnz     loc_7A43F0
0x7A4477: add     [esp+7Ch+var_68], 1
0x7A447C: add     [esp+7Ch+var_64], 10h
0x7A4481: mov     ecx, ebx
0x7A4483: call    sub_78EB40
0x7A4488: cmp     eax, 1B59h
0x7A448D: jnz     loc_7A43C0
0x7A4493: mov     byte ptr [esi+0D8h], 1
0x7A449A: mov     ecx, [esp+7Ch+var_C]
0x7A449E: mov     large fs:0, ecx
0x7A44A5: pop     ecx
0x7A44A6: pop     edi
0x7A44A7: pop     esi
0x7A44A8: pop     ebx
0x7A44A9: mov     esp, ebp
0x7A44AB: pop     ebp
0x7A44AC: retn    4
0x7A44AF: push    18h; MaxCount
0x7A44B1: push    offset aTooManyLeafLod; "too many leaf lod levels"
0x7A44B6: lea     ecx, [esp+84h+var_54]
0x7A44BA: mov     [esp+84h+var_3C], 0Fh
0x7A44C2: mov     [esp+84h+var_40], 0
0x7A44CA: mov     [esp+84h+var_50], 0
0x7A44CF: call    sub_414500
0x7A44D4: push    0
0x7A44D6: lea     ecx, [esp+80h+var_54]
0x7A44DA: push    ecx
0x7A44DB: lea     ecx, [esp+84h+var_38]
0x7A44DF: mov     [esp+84h+var_4], 1
0x7A44EA: call    sub_789190
0x7A44EF: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A44F4: lea     edx, [esp+80h+var_38]
0x7A44F8: push    edx
0x7A44F9: call    ThrowException??
0x7A44FE: push    17h; MaxCount
0x7A4500: push    offset aMalformedLeafL; "malformed leaf lod data"
0x7A4505: lea     ecx, [esp+84h+var_54]
0x7A4509: mov     [esp+84h+var_3C], 0Fh
0x7A4511: mov     [esp+84h+var_40], 0
0x7A4519: mov     [esp+84h+var_50], 0
0x7A451E: call    sub_414500
0x7A4523: push    0
0x7A4525: lea     eax, [esp+80h+var_54]
0x7A4529: push    eax
0x7A452A: lea     ecx, [esp+84h+var_38]
0x7A452E: mov     [esp+84h+var_4], 2
0x7A4539: call    sub_789190
0x7A453E: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A4543: lea     ecx, [esp+80h+var_38]
0x7A4547: push    ecx
0x7A4548: call    ThrowException??
0x7A454D: push    17h; MaxCount
0x7A454F: push    offset aMalformedLeafL; "malformed leaf lod data"
0x7A4554: lea     ecx, [esp+84h+var_54]
0x7A4558: mov     [esp+84h+var_3C], 0Fh
0x7A4560: mov     [esp+84h+var_40], 0
0x7A4568: mov     [esp+84h+var_50], 0
0x7A456D: call    sub_414500
0x7A4572: push    0
0x7A4574: lea     edx, [esp+80h+var_54]
0x7A4578: push    edx
0x7A4579: lea     ecx, [esp+84h+var_38]
0x7A457D: mov     [esp+84h+var_4], 3
0x7A4588: call    sub_789190
0x7A458D: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A4592: lea     eax, [esp+80h+var_38]
0x7A4596: push    eax
0x7A4597: call    ThrowException??
