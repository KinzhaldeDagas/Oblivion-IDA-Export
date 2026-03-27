0x4A41E0: push    0FFFFFFFFh
0x4A41E2: push    offset SEH_4A41E0
0x4A41E7: mov     eax, large fs:0
0x4A41ED: push    eax
0x4A41EE: sub     esp, 8
0x4A41F1: push    ebx
0x4A41F2: push    ebp
0x4A41F3: push    esi
0x4A41F4: push    edi
0x4A41F5: mov     eax, ds:0B30AACh
0x4A41FA: xor     eax, esp
0x4A41FC: push    eax
0x4A41FD: lea     eax, [esp+28h+var_C]
0x4A4201: mov     large fs:0, eax
0x4A4207: mov     eax, ds:0B35414h
0x4A420C: xor     ebx, ebx
0x4A420E: cmp     eax, ebx
0x4A4210: jnz     loc_4A43CC
0x4A4216: push    70h ; 'p'; Size
0x4A4218: call    FormHeapAlloc
0x4A421D: add     esp, 4
0x4A4220: mov     [esp+28h+var_10], eax
0x4A4224: cmp     eax, ebx
0x4A4226: mov     [esp+28h+var_4], ebx
0x4A422A: jz      short loc_4A4242
0x4A422C: push    1
0x4A422E: push    1
0x4A4230: push    offset unk_B25E00
0x4A4235: push    40h ; '@'
0x4A4237: push    40h ; '@'
0x4A4239: mov     ecx, eax
0x4A423B: call    NiPixelData__NiPixelData
0x4A4240: mov     ebx, eax
0x4A4242: mov     eax, [ebx+5Ch]
0x4A4245: mov     eax, [eax]
0x4A4247: add     eax, [ebx+50h]
0x4A424A: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4A4252: lea     esi, [eax+2]
0x4A4255: mov     ebp, 40h ; '@'
0x4A425A: mov     edi, 40h ; '@'
0x4A425F: fld     dword ptr ds:0A40098h
0x4A4265: push    ecx
0x4A4266: fstp    [esp+2Ch+var_2C]; float
0x4A4269: call    Rand5
0x4A426E: fnstcw  [esp+2Ch+var_12]
0x4A4272: movzx   eax, [esp+2Ch+var_12]
0x4A4277: or      eax, 0C00h
0x4A427C: mov     [esp+2Ch+var_10], eax
0x4A4280: fldcw   word ptr [esp+2Ch+var_10]
0x4A4284: fistp   [esp+2Ch+var_10]
0x4A4288: movzx   ecx, byte ptr [esp+2Ch+var_10]
0x4A428D: mov     [esi-2], cl
0x4A4290: fldcw   [esp+2Ch+var_12]
0x4A4294: fld     dword ptr ds:0A40098h
0x4A429A: fstp    [esp+2Ch+var_2C]; float
0x4A429D: call    Rand5
0x4A42A2: fnstcw  [esp+2Ch+var_12]
0x4A42A6: movzx   eax, [esp+2Ch+var_12]
0x4A42AB: or      eax, 0C00h
0x4A42B0: mov     [esp+2Ch+var_10], eax
0x4A42B4: fldcw   word ptr [esp+2Ch+var_10]
0x4A42B8: fistp   [esp+2Ch+var_10]
0x4A42BC: mov     dl, byte ptr [esp+2Ch+var_10]
0x4A42C0: mov     [esi-1], dl
0x4A42C3: fldcw   [esp+2Ch+var_12]
0x4A42C7: fld     dword ptr ds:0A40098h
0x4A42CD: fstp    [esp+2Ch+var_2C]; float
0x4A42D0: call    Rand5
0x4A42D5: fnstcw  [esp+2Ch+var_12]
0x4A42D9: movzx   eax, [esp+2Ch+var_12]
0x4A42DE: or      eax, 0C00h
0x4A42E3: mov     [esp+2Ch+var_10], eax
0x4A42E7: fldcw   word ptr [esp+2Ch+var_10]
0x4A42EB: fistp   [esp+2Ch+var_10]
0x4A42EF: mov     al, byte ptr [esp+2Ch+var_10]
0x4A42F3: mov     [esi], al
0x4A42F5: fldcw   [esp+2Ch+var_12]
0x4A42F9: fld     dword ptr ds:0A40098h
0x4A42FF: fstp    [esp+2Ch+var_2C]; float
0x4A4302: call    Rand5
0x4A4307: fnstcw  [esp+2Ch+var_12]
0x4A430B: add     esp, 4
0x4A430E: movzx   eax, [esp+28h+var_12]
0x4A4313: or      eax, 0C00h
0x4A4318: mov     [esp+28h+var_10], eax
0x4A431C: add     esi, 4
0x4A431F: sub     edi, 1
0x4A4322: fldcw   word ptr [esp+28h+var_10]
0x4A4326: fistp   [esp+28h+var_10]
0x4A432A: movzx   ecx, byte ptr [esp+28h+var_10]
0x4A432F: mov     [esi-3], cl
0x4A4332: fldcw   [esp+28h+var_12]
0x4A4336: jnz     loc_4A425F
0x4A433C: sub     ebp, 1
0x4A433F: jnz     loc_4A425A
0x4A4345: mov     ebp, 1
0x4A434A: add     [ebx+68h], ebp
0x4A434D: push    30h ; '0'; Size
0x4A434F: call    FormHeapAlloc
0x4A4354: add     esp, 4
0x4A4357: mov     [esp+28h+var_10], eax
0x4A435B: test    eax, eax
0x4A435D: mov     [esp+28h+var_4], ebp
0x4A4361: jz      short loc_4A436F
0x4A4363: push    ebx
0x4A4364: mov     ecx, eax
0x4A4366: call    sub_704800
0x4A436B: mov     esi, eax
0x4A436D: jmp     short loc_4A4371
0x4A436F: xor     esi, esi
0x4A4371: mov     ecx, ds:0B35414h
0x4A4377: cmp     ecx, esi
0x4A4379: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4A4381: jz      short loc_4A43C0
0x4A4383: test    ecx, ecx
0x4A4385: jz      short loc_4A43A4
0x4A4387: mov     edi, ecx
0x4A4389: add     ecx, 4
0x4A438C: push    ecx; lpAddend
0x4A438D: call    dword ptr ds:0A2807Ch
0x4A4393: test    eax, eax
0x4A4395: jnz     short loc_4A43A4
0x4A4397: test    edi, edi
0x4A4399: jz      short loc_4A43A4
0x4A439B: mov     edx, [edi]
0x4A439D: mov     eax, [edx]
0x4A439F: push    ebp
0x4A43A0: mov     ecx, edi
0x4A43A2: call    eax
0x4A43A4: test    esi, esi
0x4A43A6: mov     ecx, esi
0x4A43A8: mov     ds:0B35414h, ecx
0x4A43AE: jz      short loc_4A43C0
0x4A43B0: add     esi, 4
0x4A43B3: push    esi; lpAddend
0x4A43B4: call    dword ptr ds:0A28078h
0x4A43BA: mov     ecx, ds:0B35414h
0x4A43C0: push    0
0x4A43C2: call    sub_405870
0x4A43C7: mov     eax, ds:0B35414h
0x4A43CC: mov     ecx, dword ptr [esp+28h+var_C]
0x4A43D0: mov     large fs:0, ecx
0x4A43D7: pop     ecx
0x4A43D8: pop     edi
0x4A43D9: pop     esi
0x4A43DA: pop     ebp
0x4A43DB: pop     ebx
0x4A43DC: add     esp, 14h
0x4A43DF: retn
