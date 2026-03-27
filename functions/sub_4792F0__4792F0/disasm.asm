0x4792F0: push    0FFFFFFFFh
0x4792F2: push    offset SEH_4792F0
0x4792F7: mov     eax, large fs:0
0x4792FD: push    eax
0x4792FE: sub     esp, 1Ch
0x479301: push    ebx
0x479302: push    ebp
0x479303: push    esi
0x479304: push    edi
0x479305: mov     eax, ds:0B30AACh
0x47930A: xor     eax, esp
0x47930C: push    eax
0x47930D: lea     eax, [esp+3Ch+var_C]
0x479311: mov     large fs:0, eax
0x479317: xor     ebx, ebx
0x479319: cmp     [ecx+64h], ebx
0x47931C: jnz     loc_47942C
0x479322: cmp     [esp+3Ch+arg_0], ebx
0x479326: jz      loc_47942C
0x47932C: mov     esi, [esp+3Ch+arg_4]
0x479330: cmp     esi, ebx
0x479332: jz      loc_47942C
0x479338: lea     ecx, [esp+3Ch+var_28]
0x47933C: call    sub_478B90
0x479341: fld1
0x479343: fst     [esp+3Ch+var_10]
0x479347: fst     [esp+3Ch+var_14]
0x47934B: fstp    [esp+3Ch+var_18]
0x47934F: mov     [esp+3Ch+var_4], ebx
0x479353: mov     [esp+3Ch+arg_0], ebx
0x479357: push    esi
0x479358: mov     byte ptr [esp+40h+var_4], 1
0x47935D: call    sub_480820
0x479362: add     esp, 4
0x479365: test    al, al
0x479367: jz      short loc_47938A
0x479369: mov     ecx, ds:0B333A0h
0x47936F: lea     eax, [esp+3Ch+var_28]
0x479373: push    eax
0x479374: push    esi
0x479375: call    sub_4430C0
0x47937A: push    eax; a2
0x47937B: lea     ecx, [esp+40h+arg_0]; this
0x47937F: call    NiSmartPointer_Set??
0x479384: mov     ebp, [esp+3Ch+arg_0]
0x479388: jmp     short loc_479398
0x47938A: lea     ecx, [esp+3Ch+var_28]
0x47938E: push    ecx
0x47938F: mov     ecx, esi
0x479391: call    sub_700610
0x479396: mov     ebp, eax
0x479398: cmp     ebp, ebx
0x47939A: jz      short loc_47940E
0x47939C: push    ebp
0x47939D: push    offset dword_B35288
0x4793A2: call    NiRTTI__IsObjectOfRTTIType
0x4793A7: add     esp, 8
0x4793AA: test    al, al
0x4793AC: jz      short loc_4793B7
0x4793AE: push    7
0x4793B0: mov     ecx, ebp
0x4793B2: call    sub_4A01B0
0x4793B7: push    offset off_A3CEB0
0x4793BC: mov     ecx, ebp
0x4793BE: call    sub_6FFAC0
0x4793C3: mov     edx, ds:0B3F9A8h
0x4793C9: mov     [ebp+54h], edx
0x4793CC: mov     eax, ds:0B3F9ACh
0x4793D1: mov     [ebp+58h], eax
0x4793D4: mov     ecx, ds:0B3F9B0h
0x4793DA: mov     [ebp+5Ch], ecx
0x4793DD: lea     edi, [ebp+30h]
0x4793E0: mov     ecx, 9
0x4793E5: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4793EA: rep movsd
0x4793EC: lea     ecx, [esp+3Ch+arg_0]; this
0x4793F0: mov     byte ptr [esp+3Ch+var_4], bl
0x4793F4: call    sub_7016A0
0x4793F9: lea     ecx, [esp+3Ch+var_28]
0x4793FD: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x479405: call    sub_4781A0
0x47940A: mov     eax, ebp
0x47940C: jmp     short loc_47942E
0x47940E: lea     ecx, [esp+3Ch+arg_0]; this
0x479412: mov     byte ptr [esp+3Ch+var_4], bl
0x479416: call    sub_7016A0
0x47941B: lea     ecx, [esp+3Ch+var_28]
0x47941F: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x479427: call    sub_4781A0
0x47942C: xor     eax, eax
0x47942E: mov     ecx, [esp+3Ch+var_C]
0x479432: mov     large fs:0, ecx
0x479439: pop     ecx
0x47943A: pop     edi
0x47943B: pop     esi
0x47943C: pop     ebp
0x47943D: pop     ebx
0x47943E: add     esp, 28h
0x479441: retn    8
