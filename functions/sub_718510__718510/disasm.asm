0x718510: push    0FFFFFFFFh
0x718512: push    offset SEH_8C8970
0x718517: mov     eax, large fs:0
0x71851D: push    eax
0x71851E: push    ecx
0x71851F: push    esi
0x718520: push    edi
0x718521: mov     eax, ds:0B30AACh
0x718526: xor     eax, esp
0x718528: push    eax
0x718529: lea     eax, [esp+1Ch+var_C]
0x71852D: mov     large fs:0, eax
0x718533: mov     edi, ecx
0x718535: push    1Ch; Size
0x718537: call    FormHeapAlloc
0x71853C: mov     esi, eax
0x71853E: add     esp, 4
0x718541: mov     [esp+1Ch+var_10], esi
0x718545: test    esi, esi
0x718547: mov     [esp+1Ch+var_4], 0
0x71854F: jz      short loc_71856A
0x718551: mov     ecx, esi; this
0x718553: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x718558: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x71855E: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x718564: mov     byte ptr [esi+1Ah], 0
0x718568: jmp     short loc_71856C
0x71856A: xor     esi, esi
0x71856C: mov     eax, [esp+1Ch+arg_0]
0x718570: push    eax
0x718571: push    esi
0x718572: mov     ecx, edi
0x718574: mov     [esp+24h+var_4], 0FFFFFFFFh
0x71857C: call    sub_700A60
0x718581: mov     cx, [edi+18h]
0x718585: mov     [esi+18h], cx
0x718589: mov     dl, [edi+1Ah]
0x71858C: mov     [esi+1Ah], dl
0x71858F: mov     eax, esi
0x718591: mov     ecx, [esp+1Ch+var_C]
0x718595: mov     large fs:0, ecx
0x71859C: pop     ecx
0x71859D: pop     edi
0x71859E: pop     esi
0x71859F: add     esp, 10h
0x7185A2: retn    4
