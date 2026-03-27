0x5B5870: push    0FFFFFFFFh
0x5B5872: push    offset ??1SigilStoneMenu@@UAE@XZ_SEH
0x5B5877: mov     eax, large fs:0
0x5B587D: push    eax
0x5B587E: push    ecx
0x5B587F: push    esi
0x5B5880: push    edi
0x5B5881: mov     eax, ds:0B30AACh
0x5B5886: xor     eax, esp
0x5B5888: push    eax
0x5B5889: lea     eax, [esp+1Ch+var_C]
0x5B588D: mov     large fs:0, eax
0x5B5893: mov     edi, ecx
0x5B5895: mov     [esp+1Ch+var_10], edi
0x5B5899: mov     dword ptr [edi], offset ??_7MainMenu@@6B@; const MainMenu::`vftable'
0x5B589F: mov     eax, ds:0B33398h
0x5B58A4: mov     dword ptr ds:0B3B40Ch, 0
0x5B58AE: mov     byte ptr ds:0B3C0ECh, 0
0x5B58B5: mov     esi, [eax+24h]
0x5B58B8: test    esi, esi
0x5B58BA: mov     [esp+1Ch+var_4], 0
0x5B58C2: jz      short loc_5B590E
0x5B58C4: mov     ecx, esi
0x5B58C6: call    sub_6A8D50
0x5B58CB: push    0
0x5B58CD: push    0
0x5B58CF: push    0FFFFh
0x5B58D4: mov     ecx, esi
0x5B58D6: call    SoundManager_OpenMusicFile
0x5B58DB: test    al, al
0x5B58DD: jz      short loc_5B58E6
0x5B58DF: mov     ecx, esi
0x5B58E1: call    SoundManager_PlayMusic
0x5B58E6: mov     eax, ds:0B33428h
0x5B58EB: test    eax, eax
0x5B58ED: jz      short loc_5B590E
0x5B58EF: mov     eax, [eax+20h]
0x5B58F2: test    eax, eax
0x5B58F4: setnz   cl
0x5B58F7: test    cl, cl
0x5B58F9: jz      short loc_5B590E
0x5B58FB: cmp     eax, 2
0x5B58FE: jz      short loc_5B590E
0x5B5900: mov     ecx, esi
0x5B5902: call    sub_6A9B40
0x5B5907: mov     ecx, esi
0x5B5909: call    sub_6A8D00
0x5B590E: mov     ecx, ds:0B33B00h
0x5B5914: call    sub_459400
0x5B5919: push    1; arg1
0x5B591B: push    0; canCreate
0x5B591D: call    InterfaceManager_GetSingleton
0x5B5922: add     esp, 8
0x5B5925: mov     ecx, edi; this
0x5B5927: mov     byte ptr [eax+94h], 1
0x5B592E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5B5936: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5B593B: mov     ecx, [esp+1Ch+var_C]
0x5B593F: mov     large fs:0, ecx
0x5B5946: pop     ecx
0x5B5947: pop     edi
0x5B5948: pop     esi
0x5B5949: add     esp, 10h
0x5B594C: retn
