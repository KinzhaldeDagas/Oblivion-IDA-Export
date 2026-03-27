0x6F41C0: push    ebp
0x6F41C1: mov     ebp, esp
0x6F41C3: push    0FFFFFFFFh
0x6F41C5: push    offset SEH_6F41C0
0x6F41CA: mov     eax, large fs:0
0x6F41D0: push    eax
0x6F41D1: sub     esp, 44h
0x6F41D4: mov     eax, ds:0B30AACh
0x6F41D9: xor     eax, ebp
0x6F41DB: mov     [ebp+var_14], eax
0x6F41DE: push    ebx
0x6F41DF: push    esi
0x6F41E0: push    edi
0x6F41E1: push    eax
0x6F41E2: lea     eax, [ebp+var_C]
0x6F41E5: mov     large fs:0, eax
0x6F41EB: mov     [ebp+var_10], esp
0x6F41EE: mov     eax, [ebp+arg_C]
0x6F41F1: mov     esi, ecx
0x6F41F3: push    eax
0x6F41F4: lea     ecx, [ebp+var_40]
0x6F41F7: mov     [ebp+var_48], esi
0x6F41FA: call    sub_6F2D30
0x6F41FF: mov     ecx, [esi+4]
0x6F4202: xor     edi, edi
0x6F4204: cmp     ecx, edi
0x6F4206: mov     [ebp+var_4], edi
0x6F4209: jz      short loc_6F4221
0x6F420B: mov     edx, [esi+0Ch]
0x6F420E: sub     edx, ecx
0x6F4210: mov     eax, 2E8BA2E9h
0x6F4215: imul    edx
0x6F4217: sar     edx, 3
0x6F421A: mov     edi, edx
0x6F421C: shr     edi, 1Fh
0x6F421F: add     edi, edx
0x6F4221: mov     ebx, [ebp+arg_8]
0x6F4224: test    ebx, ebx
0x6F4226: jz      loc_6F4485
0x6F422C: test    ecx, ecx
0x6F422E: jnz     short loc_6F4234
0x6F4230: xor     eax, eax
0x6F4232: jmp     short loc_6F424A
0x6F4234: mov     edx, [esi+8]
0x6F4237: sub     edx, ecx
0x6F4239: mov     eax, 2E8BA2E9h
0x6F423E: imul    edx
0x6F4240: sar     edx, 3
0x6F4243: mov     eax, edx
0x6F4245: shr     eax, 1Fh
0x6F4248: add     eax, edx
0x6F424A: mov     edx, 5D1745Dh
0x6F424F: sub     edx, eax
0x6F4251: cmp     edx, ebx
0x6F4253: jnb     short loc_6F425A
0x6F4255: call    sub_790B90
0x6F425A: test    ecx, ecx
0x6F425C: jnz     short loc_6F4262
0x6F425E: xor     eax, eax
0x6F4260: jmp     short loc_6F4278
0x6F4262: mov     edx, [esi+8]
0x6F4265: sub     edx, ecx
0x6F4267: mov     eax, 2E8BA2E9h
0x6F426C: imul    edx
0x6F426E: sar     edx, 3
0x6F4271: mov     eax, edx
0x6F4273: shr     eax, 1Fh
0x6F4276: add     eax, edx
0x6F4278: add     eax, ebx
0x6F427A: cmp     edi, eax
0x6F427C: jnb     loc_6F43A6
0x6F4282: mov     eax, edi
0x6F4284: shr     eax, 1
0x6F4286: mov     edx, 5D1745Dh
0x6F428B: sub     edx, eax
0x6F428D: cmp     edx, edi
0x6F428F: jnb     short loc_6F4295
0x6F4291: xor     edi, edi
0x6F4293: jmp     short loc_6F4297
0x6F4295: add     edi, eax
0x6F4297: test    ecx, ecx
0x6F4299: jnz     short loc_6F429F
0x6F429B: xor     eax, eax
0x6F429D: jmp     short loc_6F42B5
0x6F429F: mov     edx, [esi+8]
0x6F42A2: sub     edx, ecx
0x6F42A4: mov     eax, 2E8BA2E9h
0x6F42A9: imul    edx
0x6F42AB: sar     edx, 3
0x6F42AE: mov     eax, edx
0x6F42B0: shr     eax, 1Fh
0x6F42B3: add     eax, edx
0x6F42B5: add     eax, ebx
0x6F42B7: cmp     edi, eax
0x6F42B9: jnb     short loc_6F42C6
0x6F42BB: mov     ecx, esi
0x6F42BD: call    sub_6F1140
0x6F42C2: mov     edi, eax
0x6F42C4: add     edi, ebx
0x6F42C6: push    0
0x6F42C8: push    edi; char *
0x6F42C9: call    sub_556440
0x6F42CE: mov     ecx, [esi+4]
0x6F42D1: mov     byte ptr [ebp+var_44], 0
0x6F42D5: mov     edx, [ebp+var_44]
0x6F42D8: push    edx
0x6F42D9: mov     edx, [ebp+var_44]
0x6F42DC: push    edx
0x6F42DD: push    esi
0x6F42DE: push    eax
0x6F42DF: mov     [ebp+var_50], eax
0x6F42E2: mov     [ebp+var_4C], eax
0x6F42E5: mov     eax, [ebp+arg_4]
0x6F42E8: push    eax
0x6F42E9: push    ecx
0x6F42EA: mov     byte ptr [ebp+var_4], 1
0x6F42EE: call    sub_6F3310
0x6F42F3: add     esp, 20h
0x6F42F6: lea     ecx, [ebp+var_40]
0x6F42F9: push    ecx
0x6F42FA: push    ebx
0x6F42FB: push    eax
0x6F42FC: mov     ecx, esi
0x6F42FE: mov     [ebp+var_4C], eax
0x6F4301: call    sub_6F40E0
0x6F4306: mov     ecx, [esi+8]
0x6F4309: mov     byte ptr [ebp+var_44], 0
0x6F430D: mov     edx, [ebp+var_44]
0x6F4310: push    edx
0x6F4311: mov     edx, [ebp+var_44]
0x6F4314: push    edx
0x6F4315: push    esi
0x6F4316: push    eax
0x6F4317: mov     [ebp+var_4C], eax
0x6F431A: mov     eax, [ebp+arg_4]
0x6F431D: push    ecx
0x6F431E: push    eax
0x6F431F: call    sub_6F3310
0x6F4324: mov     ecx, [esi+4]
0x6F4327: add     esp, 18h
0x6F432A: test    ecx, ecx
0x6F432C: jnz     short loc_6F4332
0x6F432E: xor     eax, eax
0x6F4330: jmp     short loc_6F4348
0x6F4332: mov     edx, [esi+8]
0x6F4335: sub     edx, ecx
0x6F4337: mov     eax, 2E8BA2E9h
0x6F433C: imul    edx
0x6F433E: sar     edx, 3
0x6F4341: mov     eax, edx
0x6F4343: shr     eax, 1Fh
0x6F4346: add     eax, edx
0x6F4348: add     ebx, eax
0x6F434A: test    ecx, ecx
0x6F434C: jz      short loc_6F4369
0x6F434E: mov     edx, [ebp+var_44]
0x6F4351: mov     eax, [esi+8]
0x6F4354: push    edx
0x6F4355: push    esi
0x6F4356: push    eax
0x6F4357: push    ecx
0x6F4358: call    sub_5573D0
0x6F435D: mov     ecx, [esi+4]
0x6F4360: push    ecx
0x6F4361: call    FormHeapFree
0x6F4366: add     esp, 14h
0x6F4369: mov     eax, [ebp+var_50]
0x6F436C: imul    edi, 2Ch ; ','
0x6F436F: imul    ebx, 2Ch ; ','
0x6F4372: add     edi, eax
0x6F4374: add     ebx, eax
0x6F4376: mov     [esi+0Ch], edi
0x6F4379: mov     [esi+8], ebx
0x6F437C: mov     [esi+4], eax
0x6F437F: jmp     loc_6F4485
0x6F4384: mov     edx, [ebp+var_4C]
0x6F4387: mov     esi, [ebp+var_50]
0x6F438A: mov     ecx, [ebp+var_48]
0x6F438D: push    edx
0x6F438E: push    esi
0x6F438F: call    sub_557930
0x6F4394: push    esi
0x6F4395: call    FormHeapFree
0x6F439A: add     esp, 4
0x6F439D: push    0
0x6F439F: push    0
0x6F43A1: call    ThrowException??
0x6F43A6: mov     ecx, [esi+8]
0x6F43A9: mov     edi, [ebp+arg_4]
0x6F43AC: mov     edx, ecx
0x6F43AE: sub     edx, edi
0x6F43B0: mov     eax, 2E8BA2E9h
0x6F43B5: imul    edx
0x6F43B7: sar     edx, 3
0x6F43BA: mov     eax, edx
0x6F43BC: shr     eax, 1Fh
0x6F43BF: add     eax, edx
0x6F43C1: cmp     eax, ebx
0x6F43C3: mov     [ebp+var_44], ecx
0x6F43C6: jnb     loc_6F4450
0x6F43CC: mov     eax, ebx
0x6F43CE: imul    eax, 2Ch ; ','
0x6F43D1: mov     [ebp+var_44], eax
0x6F43D4: add     eax, edi
0x6F43D6: push    eax
0x6F43D7: push    ecx
0x6F43D8: push    edi
0x6F43D9: mov     ecx, esi
0x6F43DB: call    sub_6F4160
0x6F43E0: mov     ecx, [esi+8]
0x6F43E3: lea     edx, [ebp+var_40]
0x6F43E6: push    edx
0x6F43E7: mov     edx, ecx
0x6F43E9: sub     edx, edi
0x6F43EB: mov     eax, 2E8BA2E9h
0x6F43F0: imul    edx
0x6F43F2: sar     edx, 3
0x6F43F5: mov     eax, edx
0x6F43F7: shr     eax, 1Fh
0x6F43FA: add     eax, edx
0x6F43FC: sub     ebx, eax
0x6F43FE: push    ebx
0x6F43FF: push    ecx
0x6F4400: mov     ecx, esi
0x6F4402: mov     byte ptr [ebp+var_4], 3
0x6F4406: call    sub_6F40E0
0x6F440B: mov     eax, [ebp+var_44]
0x6F440E: add     [esi+8], eax
0x6F4411: mov     esi, [esi+8]
0x6F4414: lea     ecx, [ebp+var_40]
0x6F4417: push    ecx
0x6F4418: sub     esi, eax
0x6F441A: push    esi
0x6F441B: push    edi
0x6F441C: mov     [ebp+var_4], 0
0x6F4423: call    sub_6F31D0
0x6F4428: add     esp, 0Ch
0x6F442B: jmp     short loc_6F4485
0x6F442D: mov     eax, [ebp+arg_8]
0x6F4430: mov     ecx, [ebp+var_48]
0x6F4433: imul    eax, 2Ch ; ','
0x6F4436: mov     edx, [ecx+8]
0x6F4439: add     edx, eax
0x6F443B: push    edx
0x6F443C: mov     edx, [ebp+arg_4]
0x6F443F: add     eax, edx
0x6F4441: push    eax
0x6F4442: call    sub_557930
0x6F4447: push    0
0x6F4449: push    0
0x6F444B: call    ThrowException??
0x6F4450: imul    ebx, 2Ch ; ','
0x6F4453: push    ecx
0x6F4454: mov     eax, ecx
0x6F4456: sub     eax, ebx
0x6F4458: push    ecx
0x6F4459: push    eax
0x6F445A: mov     ecx, esi
0x6F445C: mov     [ebp+var_48], eax
0x6F445F: call    sub_6F4160
0x6F4464: mov     ecx, [ebp+var_48]
0x6F4467: mov     [esi+8], eax
0x6F446A: mov     eax, [ebp+var_44]
0x6F446D: push    eax
0x6F446E: push    ecx
0x6F446F: push    edi
0x6F4470: call    sub_6F3E70
0x6F4475: lea     edx, [ebp+var_40]
0x6F4478: push    edx
0x6F4479: add     ebx, edi
0x6F447B: push    ebx
0x6F447C: push    edi
0x6F447D: call    sub_6F31D0
0x6F4482: add     esp, 18h
0x6F4485: mov     eax, [ebp+var_20]
0x6F4488: test    eax, eax
0x6F448A: jz      short loc_6F4495
0x6F448C: push    eax
0x6F448D: call    FormHeapFree
0x6F4492: add     esp, 4
0x6F4495: xor     eax, eax
0x6F4497: cmp     [ebp+var_28], 10h
0x6F449B: mov     [ebp+var_20], eax
0x6F449E: mov     [ebp+var_1C], eax
0x6F44A1: mov     [ebp+var_18], eax
0x6F44A4: jb      short loc_6F44B2
0x6F44A6: mov     eax, [ebp+var_3C]
0x6F44A9: push    eax
0x6F44AA: call    FormHeapFree
0x6F44AF: add     esp, 4
0x6F44B2: mov     ecx, [ebp+var_C]
0x6F44B5: mov     large fs:0, ecx
0x6F44BC: pop     ecx
0x6F44BD: pop     edi
0x6F44BE: pop     esi
0x6F44BF: pop     ebx
0x6F44C0: mov     ecx, [ebp+var_14]
0x6F44C3: xor     ecx, ebp
0x6F44C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F44CA: mov     esp, ebp
0x6F44CC: pop     ebp
0x6F44CD: retn    10h
