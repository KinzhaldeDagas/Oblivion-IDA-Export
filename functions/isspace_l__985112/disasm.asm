0x985112: push    ebp
0x985113: mov     ebp, esp
0x985115: sub     esp, 10h
0x985118: push    [ebp+Locale]; struct localeinfo_struct *
0x98511B: lea     ecx, [ebp+var_10]; this
0x98511E: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x985123: mov     eax, [ebp+var_10.locinfo]
0x985126: cmp     dword ptr [eax+0ACh], 1
0x98512D: jle     short loc_985142
0x98512F: lea     eax, [ebp+var_10]
0x985132: push    eax; Locale
0x985133: push    8; Type
0x985135: push    [ebp+C]; C
0x985138: call    __isctype_l
0x98513D: add     esp, 0Ch
0x985140: jmp     short loc_985152
0x985142: mov     eax, [eax+0C8h]
0x985148: mov     ecx, [ebp+C]
0x98514B: movzx   eax, byte ptr [eax+ecx*2]
0x98514F: and     eax, 8
0x985152: cmp     [ebp+var_4], 0
0x985156: jz      short locret_98515F
0x985158: mov     ecx, [ebp+var_8]
0x98515B: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x98515F: leave
0x985160: retn
