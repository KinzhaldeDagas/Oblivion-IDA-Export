0x4FA207: mov     edx, [esi]
0x4FA209: test    edx, edx
0x4FA20B: jz      short loc_4FA239
0x4FA20D: fcom    qword ptr [edx+8]
0x4FA210: fnstsw  ax
0x4FA212: test    ah, 44h
0x4FA215: jnp     short loc_4FA239
0x4FA217: mov     eax, [ebx]
0x4FA219: test    eax, eax
0x4FA21B: jz      short loc_4FA236
0x4FA21D: add     eax, 40h ; '@'
0x4FA220: jz      short loc_4FA236
0x4FA222: mov     ecx, [eax]
0x4FA224: test    ecx, ecx
0x4FA226: jz      short loc_4FA236
0x4FA228: mov     ecx, [ecx+0Ch]
0x4FA22B: cmp     ecx, [edx]
0x4FA22D: jz      short loc_4FA2A8
0x4FA22F: mov     eax, [eax+4]
0x4FA232: test    eax, eax
0x4FA234: jnz     short loc_4FA222
0x4FA236: add     edi, 0Ch
0x4FA239: mov     esi, [esi+4]
0x4FA23C: test    esi, esi
0x4FA23E: jnz     short ScriptEventList_GetSaveSize?___LoopBody
0x4FA240: fstp    st
0x4FA242: add     edi, 1
0x4FA245: cmp     dword ptr [ebx+10h], 0
0x4FA249: jz      short loc_4FA24E
0x4FA24B: add     edi, 8
0x4FA24E: cmp     byte ptr ds:0B05BACh, 0
0x4FA255: jz      short loc_4FA2C8
0x4FA257: mov     edx, ds:0B33B00h
0x4FA25D: mov     esi, [edx+84h]
0x4FA263: test    esi, esi
0x4FA265: jz      short loc_4FA2AD
0x4FA267: mov     eax, [esi]
0x4FA269: push    eax; a1
0x4FA26A: call    TESForm_LookupByFormID
0x4FA26F: mov     ecx, [esi+5]
0x4FA272: mov     edx, [eax]
0x4FA274: add     esp, 4
0x4FA277: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FA27C: push    25Eh
0x4FA281: push    ecx
0x4FA282: mov     ecx, eax
0x4FA284: mov     eax, [edx+0D4h]
0x4FA28A: call    eax
0x4FA28C: mov     ecx, [esi]
0x4FA28E: push    eax
0x4FA28F: movzx   edx, di
0x4FA292: push    ecx
0x4FA293: push    edx; ArgList
0x4FA294: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x4FA299: call    sub_40FEC0
0x4FA29E: add     esp, 1Ch
0x4FA2A1: mov     ax, di
0x4FA2A4: pop     edi
0x4FA2A5: pop     esi
0x4FA2A6: pop     ebx
0x4FA2A7: retn
0x4FA2A8: add     edi, 8
0x4FA2AB: jmp     short loc_4FA239
0x4FA2AD: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FA2B2: movzx   eax, di
0x4FA2B5: push    25Eh
0x4FA2BA: push    eax; ArgList
0x4FA2BB: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x4FA2C0: call    sub_40FEC0
0x4FA2C5: add     esp, 10h
0x4FA2C8: mov     ax, di
0x4FA2CB: pop     edi
0x4FA2CC: pop     esi
0x4FA2CD: pop     ebx
0x4FA2CE: retn
