0x7F46E0: push    0FFFFFFFFh
0x7F46E2: push    offset SEH_801380
0x7F46E7: mov     eax, large fs:0
0x7F46ED: push    eax
0x7F46EE: push    ecx
0x7F46EF: push    esi
0x7F46F0: push    edi
0x7F46F1: mov     eax, ds:0B30AACh
0x7F46F6: xor     eax, esp
0x7F46F8: push    eax
0x7F46F9: lea     eax, [esp+1Ch+var_C]
0x7F46FD: mov     large fs:0, eax
0x7F4703: mov     edi, ecx
0x7F4705: mov     eax, [edi+178h]
0x7F470B: test    eax, eax
0x7F470D: jnz     short loc_7F4772
0x7F470F: lea     eax, [esp+1Ch+var_10]
0x7F4713: push    eax
0x7F4714: call    sub_7606A0
0x7F4719: add     esp, 4
0x7F471C: mov     esi, eax
0x7F471E: mov     ecx, [edi+178h]; this
0x7F4724: cmp     ecx, [esi]
0x7F4726: mov     [esp+1Ch+var_4], 0
0x7F472E: jz      short loc_7F474F
0x7F4730: test    ecx, ecx
0x7F4732: jz      short loc_7F473F
0x7F4734: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F4738: jnz     short loc_7F473F
0x7F473A: call    sub_7604D0
0x7F473F: mov     eax, [esi]
0x7F4741: test    eax, eax
0x7F4743: mov     [edi+178h], eax
0x7F4749: jz      short loc_7F474F
0x7F474B: add     dword ptr [eax+60h], 1
0x7F474F: mov     eax, [esp+1Ch+var_10]
0x7F4753: test    eax, eax
0x7F4755: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7F475D: jz      short loc_7F4772
0x7F475F: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7F4763: mov     ecx, eax; this
0x7F4765: add     eax, 60h ; '`'
0x7F4768: cmp     dword ptr [eax], 0
0x7F476B: jnz     short loc_7F4772
0x7F476D: call    sub_7604D0
0x7F4772: mov     ecx, edi; this
0x7F4774: call    sub_7F4190
0x7F4779: mov     al, 1
0x7F477B: mov     ecx, [esp+1Ch+var_C]
0x7F477F: mov     large fs:0, ecx
0x7F4786: pop     ecx
0x7F4787: pop     edi
0x7F4788: pop     esi
0x7F4789: add     esp, 10h
0x7F478C: retn
