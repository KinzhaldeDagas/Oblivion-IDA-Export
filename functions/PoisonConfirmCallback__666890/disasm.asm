0x666890: sub     esp, 108h
0x666896: mov     eax, ds:0B30AACh
0x66689B: xor     eax, esp
0x66689D: mov     [esp+108h+var_4], eax
0x6668A4: mov     eax, ds:0B333C4h
0x6668A9: cmp     dword ptr [eax+6E0h], 0
0x6668B0: jz      loc_6669CC
0x6668B6: call    sub_578D70
0x6668BB: cmp     al, 2
0x6668BD: jnz     loc_6669BD
0x6668C3: push    esi
0x6668C4: push    103h
0x6668C9: lea     ecx, [esp+110h+var_108+1]
0x6668CD: push    0
0x6668CF: push    ecx
0x6668D0: mov     [esp+118h+var_108], 0
0x6668D5: call    __memset
0x6668DA: mov     edx, ds:0B333C4h
0x6668E0: mov     eax, [edx+6E0h]
0x6668E6: mov     esi, ds:0B38BA8h
0x6668EC: push    0; int
0x6668EE: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x6668F3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6668F8: push    0; int
0x6668FA: push    eax; void *
0x6668FB: call    OblivionDynamicCast
0x666900: add     esp, 20h
0x666903: test    eax, eax
0x666905: jz      short loc_66690E
0x666907: mov     eax, [eax+4]
0x66690A: test    eax, eax
0x66690C: jnz     short loc_666913
0x66690E: mov     eax, offset EmptyString
0x666913: push    esi
0x666914: push    eax
0x666915: lea     eax, [esp+114h+var_108]
0x666919: push    offset aSS; "%s %s"
0x66691E: push    eax
0x66691F: call    __sprintf
0x666924: fld     dword ptr ds:0A379B4h
0x66692A: add     esp, 10h
0x66692D: push    0; int
0x66692F: push    0; int
0x666931: push    ecx
0x666932: lea     ecx, [esp+118h+var_108]
0x666936: fstp    [esp+118h+var_118]; float
0x666939: push    ecx; int
0x66693A: call    QueueUIMessage
0x66693F: mov     edx, ds:0B333C4h
0x666945: mov     ecx, [edx+58h]
0x666948: mov     eax, [ecx]
0x66694A: mov     edx, [eax+0ECh]
0x666950: add     esp, 10h
0x666953: push    1
0x666955: call    edx
0x666957: mov     esi, eax
0x666959: test    esi, esi
0x66695B: jz      short loc_6669BC
0x66695D: mov     eax, [esi+8]
0x666960: push    0; int
0x666962: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x666967: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x66696C: push    0; int
0x66696E: push    eax; void *
0x66696F: call    OblivionDynamicCast
0x666974: add     esp, 14h
0x666977: test    eax, eax
0x666979: jz      short loc_6669BC
0x66697B: mov     eax, ds:0B333C4h
0x666980: mov     ecx, [eax+6E0h]
0x666986: push    ecx
0x666987: mov     ecx, esi
0x666989: call    sub_484E20
0x66698E: mov     ecx, ds:0B333C4h
0x666994: mov     edx, [ecx]
0x666996: mov     eax, [ecx+6E0h]
0x66699C: mov     edx, [edx+100h]
0x6669A2: push    0
0x6669A4: push    1
0x6669A6: push    0
0x6669A8: push    0
0x6669AA: push    0
0x6669AC: push    0
0x6669AE: push    0
0x6669B0: push    1
0x6669B2: push    0
0x6669B4: push    eax
0x6669B5: call    edx
0x6669B7: call    InventoryMenu_InitializeOrUpdate
0x6669BC: pop     esi
0x6669BD: mov     eax, ds:0B333C4h
0x6669C2: mov     dword ptr [eax+6E0h], 0
0x6669CC: mov     ecx, [esp+108h+var_4]
0x6669D3: xor     ecx, esp
0x6669D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6669DA: add     esp, 108h
0x6669E0: retn
