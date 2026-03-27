0x704190: push    0FFFFFFFFh
0x704192: push    offset SEH_704190
0x704197: mov     eax, large fs:0
0x70419D: push    eax
0x70419E: sub     esp, 20h
0x7041A1: push    ebx
0x7041A2: push    esi
0x7041A3: push    edi
0x7041A4: mov     eax, ds:0B30AACh
0x7041A9: xor     eax, esp
0x7041AB: push    eax
0x7041AC: lea     eax, [esp+3Ch+var_C]
0x7041B0: mov     large fs:0, eax
0x7041B6: mov     edi, ecx
0x7041B8: mov     [esp+3Ch+var_2C], edi
0x7041BC: mov     esi, [esp+3Ch+arg_0]
0x7041C0: mov     dword ptr [edi], offset ??_7Map@NiTexturingProperty@@6B@; const NiTexturingProperty::Map::`vftable'
0x7041C6: mov     ax, [esi+4]
0x7041CA: mov     [edi+4], ax
0x7041CE: mov     eax, [esi+8]
0x7041D1: xor     ebx, ebx
0x7041D3: cmp     eax, ebx
0x7041D5: mov     [edi+8], eax
0x7041D8: jz      short loc_7041E4
0x7041DA: add     eax, 4
0x7041DD: push    eax; lpAddend
0x7041DE: call    dword ptr ds:0A28078h
0x7041E4: cmp     [esi+0Ch], ebx
0x7041E7: mov     [esp+3Ch+var_4], ebx
0x7041EB: jz      short loc_70426B
0x7041ED: push    48h ; 'H'; Size
0x7041EF: call    FormHeapAlloc
0x7041F4: add     esp, 4
0x7041F7: mov     [esp+3Ch+var_28], eax
0x7041FB: cmp     eax, ebx
0x7041FD: mov     byte ptr [esp+3Ch+var_4], 1
0x704202: jz      short loc_704264
0x704204: mov     edx, [esi+0Ch]
0x704207: mov     ecx, [edx+14h]
0x70420A: mov     ebx, [edx+44h]
0x70420D: mov     [esp+3Ch+var_24], ecx
0x704211: mov     edx, [edx+18h]
0x704214: mov     [esp+3Ch+var_20], edx
0x704218: mov     edx, [esi+0Ch]
0x70421B: mov     ecx, [edx+0Ch]
0x70421E: mov     esi, [esi+0Ch]
0x704221: mov     [esp+3Ch+var_1C], ecx
0x704225: mov     edx, [edx+10h]
0x704228: mov     [esp+3Ch+var_18], edx
0x70422C: fld     dword ptr [esi+8]
0x70422F: mov     ecx, [esi]
0x704231: fstp    [esp+3Ch+arg_0]
0x704235: fld     [esp+3Ch+arg_0]
0x704239: mov     [esp+3Ch+var_14], ecx
0x70423D: mov     edx, [esi+4]
0x704240: push    ebx; int
0x704241: lea     ecx, [esp+40h+var_24]
0x704245: push    ecx; int
0x704246: mov     [esp+44h+var_10], edx
0x70424A: lea     edx, [esp+44h+var_1C]
0x70424E: push    edx; int
0x70424F: push    ecx
0x704250: lea     ecx, [esp+4Ch+var_14]
0x704254: fstp    [esp+4Ch+var_4C]; float
0x704257: push    ecx; int
0x704258: mov     ecx, eax
0x70425A: call    sub_72FF40
0x70425F: mov     [edi+0Ch], eax
0x704262: jmp     short loc_70426E
0x704264: xor     eax, eax
0x704266: mov     [edi+0Ch], eax
0x704269: jmp     short loc_70426E
0x70426B: mov     [edi+0Ch], ebx
0x70426E: mov     eax, edi
0x704270: mov     ecx, [esp+3Ch+var_C]
0x704274: mov     large fs:0, ecx
0x70427B: pop     ecx
0x70427C: pop     edi
0x70427D: pop     esi
0x70427E: pop     ebx
0x70427F: add     esp, 2Ch
0x704282: retn    4
