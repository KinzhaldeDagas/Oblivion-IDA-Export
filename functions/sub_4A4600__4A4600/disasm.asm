0x4A4600: push    0FFFFFFFFh
0x4A4602: push    offset SEH_4A4600
0x4A4607: mov     eax, large fs:0
0x4A460D: push    eax
0x4A460E: mov     eax, ds:0B30AACh
0x4A4613: xor     eax, esp
0x4A4615: push    eax
0x4A4616: lea     eax, [esp+10h+var_C]
0x4A461A: mov     large fs:0, eax
0x4A4620: mov     ecx, [esp+10h+arg_0]
0x4A4624: add     ecx, 0FFFFFFFDh; switch 5 cases
0x4A4627: xor     eax, eax
0x4A4629: cmp     ecx, 4
0x4A462C: ja      def_4A4632
0x4A4632: jmp     ds:jpt_4A4632[ecx*4]; switch jump
0x4A4639: push    10h; jumptable 004A4632 case 3
0x4A463B: call    FormHeapAlloc
0x4A4640: add     esp, 4
0x4A4643: mov     [esp+10h+arg_0], eax
0x4A4647: test    eax, eax
0x4A4649: mov     [esp+10h+var_4], 0
0x4A4651: jz      loc_4A4740
0x4A4657: mov     ecx, eax
0x4A4659: call    sub_4A5610
0x4A465E: mov     ecx, [esp+10h+var_C]
0x4A4662: mov     large fs:0, ecx
0x4A4669: pop     ecx
0x4A466A: add     esp, 0Ch
0x4A466D: retn    4
0x4A4670: push    10h; jumptable 004A4632 case 4
0x4A4672: call    FormHeapAlloc
0x4A4677: add     esp, 4
0x4A467A: mov     [esp+10h+arg_0], eax
0x4A467E: test    eax, eax
0x4A4680: mov     [esp+10h+var_4], 1
0x4A4688: jz      loc_4A4740
0x4A468E: mov     ecx, eax
0x4A4690: call    sub_4A4A80
0x4A4695: mov     ecx, [esp+10h+var_C]
0x4A4699: mov     large fs:0, ecx
0x4A46A0: pop     ecx
0x4A46A1: add     esp, 0Ch
0x4A46A4: retn    4
0x4A46A7: push    0Ch; jumptable 004A4632 case 5
0x4A46A9: call    FormHeapAlloc
0x4A46AE: add     esp, 4
0x4A46B1: mov     [esp+10h+arg_0], eax
0x4A46B5: test    eax, eax
0x4A46B7: mov     [esp+10h+var_4], 2
0x4A46BF: jz      short loc_4A4740
0x4A46C1: mov     ecx, eax
0x4A46C3: call    sub_4A3CD0
0x4A46C8: mov     ecx, [esp+10h+var_C]
0x4A46CC: mov     large fs:0, ecx
0x4A46D3: pop     ecx
0x4A46D4: add     esp, 0Ch
0x4A46D7: retn    4
0x4A46DA: push    0Ch; jumptable 004A4632 case 6
0x4A46DC: call    FormHeapAlloc
0x4A46E1: add     esp, 4
0x4A46E4: mov     [esp+10h+arg_0], eax
0x4A46E8: test    eax, eax
0x4A46EA: mov     [esp+10h+var_4], 3
0x4A46F2: jz      short loc_4A4740
0x4A46F4: mov     ecx, eax
0x4A46F6: call    sub_4A35E0
0x4A46FB: mov     ecx, [esp+10h+var_C]
0x4A46FF: mov     large fs:0, ecx
0x4A4706: pop     ecx
0x4A4707: add     esp, 0Ch
0x4A470A: retn    4
0x4A470D: push    14h; jumptable 004A4632 case 7
0x4A470F: call    FormHeapAlloc
0x4A4714: add     esp, 4
0x4A4717: mov     [esp+10h+arg_0], eax
0x4A471B: test    eax, eax
0x4A471D: mov     [esp+10h+var_4], 4
0x4A4725: jz      short loc_4A4740
0x4A4727: mov     ecx, eax
0x4A4729: call    sub_4A55C0
0x4A472E: mov     ecx, [esp+10h+var_C]
0x4A4732: mov     large fs:0, ecx
0x4A4739: pop     ecx
0x4A473A: add     esp, 0Ch
0x4A473D: retn    4
0x4A4740: xor     eax, eax
