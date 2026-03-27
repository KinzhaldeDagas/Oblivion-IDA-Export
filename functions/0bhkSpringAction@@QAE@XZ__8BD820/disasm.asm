0x8BD820: push    0FFFFFFFFh
0x8BD822: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8BD827: mov     eax, large fs:0
0x8BD82D: push    eax
0x8BD82E: push    ecx
0x8BD82F: push    ebp
0x8BD830: push    esi
0x8BD831: push    edi
0x8BD832: mov     eax, ds:0B30AACh
0x8BD837: xor     eax, esp
0x8BD839: push    eax
0x8BD83A: lea     eax, [esp+20h+var_C]
0x8BD83E: mov     large fs:0, eax
0x8BD844: mov     edi, ecx
0x8BD846: push    offset stru_BA7C80; lpCriticalSection
0x8BD84B: call    dword ptr ds:0A2806Ch
0x8BD851: call    dword ptr ds:0A2808Ch
0x8BD857: mov     ebp, 1
0x8BD85C: add     ds:0BA7CFCh, ebp
0x8BD862: push    10h; Size
0x8BD864: mov     ds:0BA7CF8h, eax
0x8BD869: call    FormHeapAlloc
0x8BD86E: mov     esi, eax
0x8BD870: add     esp, 4
0x8BD873: mov     [esp+20h+var_10], esi
0x8BD877: test    esi, esi
0x8BD879: mov     [esp+20h+var_4], 0
0x8BD881: jz      short loc_8BD8B7
0x8BD883: mov     ecx, esi; this
0x8BD885: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BD88A: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x8BD890: mov     dword ptr [esi+0Ch], 0
0x8BD897: add     ds:0BA7D00h, ebp
0x8BD89D: mov     dword ptr [esi], offset ??_7bhkBinaryAction@@6B@; const bhkBinaryAction::`vftable'
0x8BD8A3: add     ds:0BA7D40h, ebp
0x8BD8A9: mov     dword ptr [esi], offset ??_7bhkSpringAction@@6B@; const bhkSpringAction::`vftable'
0x8BD8AF: add     ds:0BA8058h, ebp
0x8BD8B5: jmp     short loc_8BD8B9
0x8BD8B7: xor     esi, esi
0x8BD8B9: mov     ecx, [esp+20h+arg_0]
0x8BD8BD: mov     eax, [edi]
0x8BD8BF: mov     edx, [eax+88h]
0x8BD8C5: push    ecx
0x8BD8C6: push    esi
0x8BD8C7: mov     ecx, edi
0x8BD8C9: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8BD8D1: call    edx
0x8BD8D3: sub     ds:0BA7CFCh, ebp
0x8BD8D9: jnz     short loc_8BD8E5
0x8BD8DB: mov     dword ptr ds:0BA7CF8h, 0
0x8BD8E5: push    offset stru_BA7C80; lpCriticalSection
0x8BD8EA: call    dword ptr ds:0A28074h
0x8BD8F0: mov     eax, esi
0x8BD8F2: mov     ecx, dword ptr [esp+20h+var_C]
0x8BD8F6: mov     large fs:0, ecx
0x8BD8FD: pop     ecx
0x8BD8FE: pop     edi
0x8BD8FF: pop     esi
0x8BD900: pop     ebp
0x8BD901: add     esp, 10h
0x8BD904: retn    4
