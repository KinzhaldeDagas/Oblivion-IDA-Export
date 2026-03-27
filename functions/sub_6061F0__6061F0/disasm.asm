0x6061F0: push    esi
0x6061F1: mov     esi, ecx
0x6061F3: mov     ecx, ds:0B33B00h
0x6061F9: push    edi
0x6061FA: xor     edi, edi
0x6061FC: call    sub_45A170
0x606201: test    al, al
0x606203: jz      short loc_60620A
0x606205: mov     edi, 6
0x60620A: lea     eax, [esi+1Ch]
0x60620D: add     edi, 23h ; '#'
0x606210: xor     ecx, ecx
0x606212: test    eax, eax
0x606214: jz      short loc_606225
0x606216: cmp     dword ptr [eax], 0
0x606219: jz      short loc_60621E
0x60621B: add     ecx, 1
0x60621E: mov     eax, [eax+4]
0x606221: test    eax, eax
0x606223: jnz     short loc_606216
0x606225: cmp     byte ptr ds:0B05BACh, 0
0x60622C: lea     edi, [edi+ecx*4+2]
0x606230: jz      short loc_60629C
0x606232: mov     eax, ds:0B33B00h
0x606237: mov     esi, [eax+84h]
0x60623D: test    esi, esi
0x60623F: jz      short loc_606281
0x606241: mov     ecx, [esi]
0x606243: push    ecx; a1
0x606244: call    TESForm_LookupByFormID
0x606249: mov     edx, [esi+5]
0x60624C: add     esp, 4
0x60624F: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606254: push    0FAh ; 'ú'
0x606259: push    edx
0x60625A: mov     edx, [eax]
0x60625C: mov     ecx, eax
0x60625E: mov     eax, [edx+0D4h]
0x606264: call    eax
0x606266: mov     ecx, [esi]
0x606268: push    eax
0x606269: movzx   edx, di
0x60626C: push    ecx
0x60626D: push    edx; ArgList
0x60626E: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x606273: call    sub_40FEC0
0x606278: add     esp, 1Ch
0x60627B: mov     ax, di
0x60627E: pop     edi
0x60627F: pop     esi
0x606280: retn
0x606281: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606286: movzx   eax, di
0x606289: push    0FAh ; 'ú'
0x60628E: push    eax; ArgList
0x60628F: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x606294: call    sub_40FEC0
0x606299: add     esp, 10h
0x60629C: mov     ax, di
0x60629F: pop     edi
0x6062A0: pop     esi
0x6062A1: retn
