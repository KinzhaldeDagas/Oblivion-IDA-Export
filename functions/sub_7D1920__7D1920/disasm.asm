0x7D1920: push    0FFFFFFFFh
0x7D1922: push    offset SEH_7D1920
0x7D1927: mov     eax, large fs:0
0x7D192D: push    eax
0x7D192E: sub     esp, 114h
0x7D1934: mov     eax, ds:0B30AACh
0x7D1939: xor     eax, esp
0x7D193B: mov     [esp+120h+var_10], eax
0x7D1942: push    ebx
0x7D1943: push    ebp
0x7D1944: push    esi
0x7D1945: push    edi
0x7D1946: mov     eax, ds:0B30AACh
0x7D194B: xor     eax, esp
0x7D194D: push    eax
0x7D194E: lea     eax, [esp+134h+var_C]
0x7D1955: mov     large fs:0, eax
0x7D195B: mov     ebp, [esp+134h+arg_0]
0x7D1962: lea     eax, [esp+134h+var_118]
0x7D1966: push    eax
0x7D1967: mov     ecx, ebp
0x7D1969: mov     [esp+138h+var_11C], 0
0x7D1971: call    sub_405760
0x7D1976: mov     edi, [eax]
0x7D1978: mov     eax, [esp+134h+var_118]
0x7D197C: test    eax, eax
0x7D197E: mov     ebx, ds:0A2807Ch
0x7D1984: jz      short loc_7D19A0
0x7D1986: mov     esi, eax
0x7D1988: add     eax, 4
0x7D198B: push    eax; lpAddend
0x7D198C: call    ebx ; InterlockedDecrement
0x7D198E: test    eax, eax
0x7D1990: jnz     short loc_7D19A0
0x7D1992: test    esi, esi
0x7D1994: jz      short loc_7D19A0
0x7D1996: mov     edx, [esi]
0x7D1998: mov     eax, [edx]
0x7D199A: push    1
0x7D199C: mov     ecx, esi
0x7D199E: call    eax
0x7D19A0: test    edi, edi
0x7D19A2: jnz     short loc_7D19DB
0x7D19A4: mov     ecx, ebp; this
0x7D19A6: call    NiAVObject_InitializePropertyState
0x7D19AB: lea     ecx, [esp+134h+var_120]
0x7D19AF: push    ecx
0x7D19B0: mov     ecx, ebp
0x7D19B2: call    sub_405760
0x7D19B7: mov     edi, [eax]
0x7D19B9: mov     eax, [esp+134h+var_120]
0x7D19BD: test    eax, eax
0x7D19BF: jz      short loc_7D19DB
0x7D19C1: mov     esi, eax
0x7D19C3: add     eax, 4
0x7D19C6: push    eax; lpAddend
0x7D19C7: call    ebx ; InterlockedDecrement
0x7D19C9: test    eax, eax
0x7D19CB: jnz     short loc_7D19DB
0x7D19CD: test    esi, esi
0x7D19CF: jz      short loc_7D19DB
0x7D19D1: mov     edx, [esi]
0x7D19D3: mov     eax, [edx]
0x7D19D5: push    1
0x7D19D7: mov     ecx, esi
0x7D19D9: call    eax
0x7D19DB: test    ebp, ebp
0x7D19DD: jnz     short loc_7D19E6
0x7D19DF: xor     eax, eax
0x7D19E1: jmp     loc_7D1C2D
0x7D19E6: mov     edx, [ebp+0]
0x7D19E9: mov     eax, [edx+14h]
0x7D19EC: mov     ecx, ebp
0x7D19EE: call    eax
0x7D19F0: test    eax, eax
0x7D19F2: jnz     short loc_7D19DF
0x7D19F4: mov     edi, [edi+20h]
0x7D19F7: test    edi, edi
0x7D19F9: jz      short loc_7D19DF
0x7D19FB: push    2
0x7D19FD: mov     ecx, ebp
0x7D19FF: call    NiNode_GetNiPropertyByID
0x7D1A04: mov     esi, eax
0x7D1A06: test    esi, esi
0x7D1A08: jz      short loc_7D1A2D
0x7D1A0A: mov     eax, [esi+8]
0x7D1A0D: test    eax, eax
0x7D1A0F: jz      short loc_7D1A2D
0x7D1A11: push    offset aLava; "lava"
0x7D1A16: push    eax; Str1
0x7D1A17: call    __strcmp
0x7D1A1C: add     esp, 8
0x7D1A1F: test    eax, eax
0x7D1A21: jnz     short loc_7D1A2D
0x7D1A23: mov     eax, 11h
0x7D1A28: jmp     loc_7D1C2D
0x7D1A2D: mov     ecx, [edi+20h]
0x7D1A30: mov     eax, [ecx]
0x7D1A32: test    eax, eax
0x7D1A34: jz      short loc_7D19DF
0x7D1A36: mov     eax, [eax+8]
0x7D1A39: test    eax, eax
0x7D1A3B: jz      short loc_7D19DF
0x7D1A3D: push    eax
0x7D1A3E: push    offset dword_B3F95C
0x7D1A43: call    NiRTTI_Cast
0x7D1A48: add     esp, 8
0x7D1A4B: test    eax, eax
0x7D1A4D: jz      loc_7D1C28
0x7D1A53: mov     eax, [eax+38h]
0x7D1A56: test    eax, eax
0x7D1A58: jz      loc_7D1C28
0x7D1A5E: push    offset a_n; "_n"
0x7D1A63: push    eax
0x7D1A64: lea     edx, [esp+13Ch+Src]
0x7D1A68: push    edx
0x7D1A69: call    sub_7B4160
0x7D1A6E: push    1; char
0x7D1A70: push    1; char
0x7D1A72: lea     eax, [esp+148h+Src]
0x7D1A76: push    eax; Src
0x7D1A77: lea     ecx, [esp+14Ch+var_11C]
0x7D1A7B: push    ecx; int
0x7D1A7C: call    sub_7B8200
0x7D1A81: add     esp, 1Ch
0x7D1A84: cmp     dword ptr [eax], 0
0x7D1A87: jnz     short loc_7D1A97
0x7D1A89: cmp     byte ptr [esp+134h+arg_4], 0
0x7D1A91: jnz     short loc_7D1A97
0x7D1A93: mov     bl, 1
0x7D1A95: jmp     short loc_7D1A99
0x7D1A97: xor     bl, bl
0x7D1A99: lea     ecx, [esp+134h+var_11C]; this
0x7D1A9D: call    sub_7016A0
0x7D1AA2: test    bl, bl
0x7D1AA4: jnz     loc_7D19DF
0x7D1AAA: test    esi, esi
0x7D1AAC: jz      short loc_7D1AE8
0x7D1AAE: mov     eax, [esi+8]
0x7D1AB1: test    eax, eax
0x7D1AB3: jz      short loc_7D1AE8
0x7D1AB5: push    4; MaxCount
0x7D1AB7: push    offset aHair; "hair"
0x7D1ABC: push    eax; Str1
0x7D1ABD: call    __strnicmp
0x7D1AC2: add     esp, 0Ch
0x7D1AC5: test    eax, eax
0x7D1AC7: jnz     short loc_7D1AE8
0x7D1AC9: cmp     ds:0B42EA5h, al
0x7D1ACF: jnz     short loc_7D1ADE
0x7D1AD1: cmp     dword ptr ds:0B42F48h, 5
0x7D1AD8: jl      loc_7D1C28
0x7D1ADE: mov     eax, 1Ah
0x7D1AE3: jmp     loc_7D1C2D
0x7D1AE8: cmp     dword ptr ds:0B42F48h, 2
0x7D1AEF: jl      short loc_7D1B2D
0x7D1AF1: test    esi, esi
0x7D1AF3: jz      short loc_7D1B2D
0x7D1AF5: mov     eax, [esi+8]
0x7D1AF8: push    offset aSkin; "skin"
0x7D1AFD: push    eax; Str1
0x7D1AFE: call    __strcmp
0x7D1B03: add     esp, 8
0x7D1B06: test    eax, eax
0x7D1B08: jnz     short loc_7D1B2D
0x7D1B0A: fld1
0x7D1B0C: fcomp   dword ptr [esi+4Ch]
0x7D1B0F: fnstsw  ax
0x7D1B11: test    ah, 41h
0x7D1B14: jnz     short loc_7D1B23
0x7D1B16: fld     dword ptr ds:0A46B10h
0x7D1B1C: add     dword ptr [esi+54h], 1
0x7D1B20: fstp    dword ptr [esi+4Ch]
0x7D1B23: mov     eax, 0Eh
0x7D1B28: jmp     loc_7D1C2D
0x7D1B2D: mov     dl, [edi+18h]
0x7D1B30: and     dl, 0Eh
0x7D1B33: cmp     dl, 8
0x7D1B36: jnz     short loc_7D1B42
0x7D1B38: mov     eax, 0Fh
0x7D1B3D: jmp     loc_7D1C2D
0x7D1B42: push    0
0x7D1B44: mov     ecx, ebp
0x7D1B46: call    NiNode_GetNiPropertyByID
0x7D1B4B: push    2
0x7D1B4D: mov     ecx, ebp
0x7D1B4F: mov     esi, eax
0x7D1B51: call    NiNode_GetNiPropertyByID
0x7D1B56: test    eax, eax
0x7D1B58: jz      short loc_7D1B71
0x7D1B5A: mov     eax, [eax+8]
0x7D1B5D: push    7; MaxCount
0x7D1B5F: push    offset aDynalpha; "dynalpha"
0x7D1B64: push    eax; Str1
0x7D1B65: call    __strnicmp
0x7D1B6A: add     esp, 0Ch
0x7D1B6D: mov     edi, eax
0x7D1B6F: jmp     short loc_7D1B74
0x7D1B71: or      edi, 0FFFFFFFFh
0x7D1B74: test    esi, esi
0x7D1B76: jnz     short loc_7D1BB3
0x7D1B78: test    edi, edi
0x7D1B7A: jnz     short loc_7D1BCD
0x7D1B7C: push    1Ch; Size
0x7D1B7E: call    FormHeapAlloc
0x7D1B83: add     esp, 4
0x7D1B86: mov     [esp+134h+var_120], eax
0x7D1B8A: test    eax, eax
0x7D1B8C: mov     [esp+134h+var_4], edi
0x7D1B93: jz      short loc_7D1B9E
0x7D1B95: mov     ecx, eax
0x7D1B97: call    sub_47F920
0x7D1B9C: jmp     short loc_7D1BA0
0x7D1B9E: xor     eax, eax
0x7D1BA0: and     word ptr [eax+18h], 0FFFEh
0x7D1BA6: mov     [esp+134h+var_4], 0FFFFFFFFh
0x7D1BB1: mov     esi, eax
0x7D1BB3: test    byte ptr [esi+18h], 1
0x7D1BB7: jnz     short loc_7D1BBD
0x7D1BB9: test    edi, edi
0x7D1BBB: jnz     short loc_7D1BCD
0x7D1BBD: cmp     byte ptr ds:0B42EA5h, 0
0x7D1BC4: jz      short loc_7D1BFD
0x7D1BC6: mov     eax, 1Ah
0x7D1BCB: jmp     short loc_7D1C2D
0x7D1BCD: cmp     byte ptr ds:0B42EA5h, 0
0x7D1BD4: jz      short loc_7D1BFD
0x7D1BD6: mov     esi, [ebp+0Ch]
0x7D1BD9: test    esi, esi
0x7D1BDB: jz      short loc_7D1BFD
0x7D1BDD: lea     ecx, [ecx+0]
0x7D1BE0: push    esi
0x7D1BE1: push    offset stru_B3CE30
0x7D1BE6: call    NiRTTI__IsObjectOfRTTIType
0x7D1BEB: add     esp, 8
0x7D1BEE: test    al, al
0x7D1BF0: jnz     loc_7D1ADE
0x7D1BF6: mov     esi, [esi+34h]
0x7D1BF9: test    esi, esi
0x7D1BFB: jnz     short loc_7D1BE0
0x7D1BFD: mov     esi, [ebp+8]
0x7D1C00: test    esi, esi
0x7D1C02: jz      short loc_7D1C28
0x7D1C04: push    5; MaxCount
0x7D1C06: push    offset aBlock_0; "Block"
0x7D1C0B: push    esi; Str1
0x7D1C0C: call    _strncmp
0x7D1C11: add     esp, 0Ch
0x7D1C14: test    eax, eax
0x7D1C16: jz      short loc_7D1C28
0x7D1C18: push    4; MaxCount
0x7D1C1A: push    offset aStbb; "STBB"
0x7D1C1F: push    esi; Str1
0x7D1C20: call    _strncmp
0x7D1C25: add     esp, 0Ch
0x7D1C28: mov     eax, 1
0x7D1C2D: mov     ecx, [esp+134h+var_C]
0x7D1C34: mov     large fs:0, ecx
0x7D1C3B: pop     ecx
0x7D1C3C: pop     edi
0x7D1C3D: pop     esi
0x7D1C3E: pop     ebp
0x7D1C3F: pop     ebx
0x7D1C40: mov     ecx, [esp+120h+var_10]
0x7D1C47: xor     ecx, esp
0x7D1C49: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7D1C4E: add     esp, 120h
0x7D1C54: retn
