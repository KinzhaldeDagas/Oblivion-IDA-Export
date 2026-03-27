0x59BD80: push    ebp
0x59BD81: mov     ebp, esp
0x59BD83: and     esp, 0FFFFFFF8h
0x59BD86: push    0FFFFFFFFh
0x59BD88: push    offset SEH_59BD80
0x59BD8D: mov     eax, large fs:0
0x59BD93: push    eax
0x59BD94: sub     esp, 14h
0x59BD97: push    ebx; a3
0x59BD98: push    ebp; a3
0x59BD99: push    esi; a3
0x59BD9A: push    edi; a3
0x59BD9B: mov     eax, ds:0B30AACh
0x59BDA0: xor     eax, esp
0x59BDA2: push    eax; a3
0x59BDA3: lea     eax, [esp+34h+var_C]
0x59BDA7: mov     large fs:0, eax
0x59BDAD: mov     esi, ecx
0x59BDAF: cmp     byte ptr [esi+0D4h], 0
0x59BDB6: jz      loc_59C0A4
0x59BDBC: mov     eax, [esi+5Ch]
0x59BDBF: mov     eax, ds:0B39548h[eax*4]
0x59BDC6: test    eax, eax
0x59BDC8: jz      short loc_59BDCE
0x59BDCA: mov     eax, [eax]
0x59BDCC: jmp     short loc_59BDD0
0x59BDCE: xor     eax, eax
0x59BDD0: mov     ecx, [esi+4]
0x59BDD3: push    eax
0x59BDD4: push    0FB3h
0x59BDD9: call    Tile_SetString
0x59BDDE: mov     ecx, [esi+34h]
0x59BDE1: mov     ebp, [ecx+34h]
0x59BDE4: test    ebp, ebp
0x59BDE6: jz      loc_59BFB2
0x59BDEC: lea     esp, [esp+0]
0x59BDF0: mov     edi, [ebp+8]
0x59BDF3: lea     eax, [ebp+8]
0x59BDF6: mov     ebp, [ebp+0]
0x59BDF9: push    0FA8h
0x59BDFE: mov     ecx, edi
0x59BE00: call    Tile_GetFloat
0x59BE05: call    Double_To_SInt32
0x59BE0A: mov     edx, ds:0B33398h
0x59BE10: mov     ecx, [edx+20h]; this
0x59BE13: mov     edx, [esi+5Ch]
0x59BE16: mov     ebx, edx
0x59BE18: imul    ebx, 1Dh
0x59BE1B: sub     eax, 0Eh
0x59BE1E: add     ebx, ecx
0x59BE20: mov     bl, [ebx+eax+1B7Eh]
0x59BE27: xor     eax, eax
0x59BE29: mov     [esp+34h+var_18.m_data], eax; a3
0x59BE2D: mov     [esp+34h+var_18.m_dataLen], ax; a3
0x59BE32: mov     [esp+34h+var_18.m_bufLen], ax
0x59BE37: cmp     bl, 0FFh
0x59BE3A: mov     [esp+34h+var_4], eax
0x59BE3E: jnz     short loc_59BE54
0x59BE40: push    eax; a3
0x59BE41: push    offset asc_A6B770; "--"
0x59BE46: lea     ecx, [esp+3Ch+var_18]; this
0x59BE4A: call    BSStringT_Set
0x59BE4F: jmp     loc_59BF20
0x59BE54: cmp     edx, eax
0x59BE56: jnz     short loc_59BE7A
0x59BE58: cmp     bl, 0EEh ; 'î'
0x59BE5B: jnb     short loc_59BE7A
0x59BE5D: movzx   eax, bl
0x59BE60: mov     eax, ds:0B39578h[eax*4]
0x59BE67: test    eax, eax
0x59BE69: jz      short loc_59BE78
0x59BE6B: mov     ecx, [eax]
0x59BE6D: push    ecx
0x59BE6E: push    offset aS; "%s"
0x59BE73: jmp     loc_59BF13
0x59BE78: xor     eax, eax
0x59BE7A: cmp     edx, 1
0x59BE7D: jnz     short loc_59BE9E
0x59BE7F: cmp     bl, 9
0x59BE82: jnb     short loc_59BE9E
0x59BE84: movzx   eax, bl
0x59BE87: mov     eax, ds:0B39554h[eax*4]
0x59BE8E: test    eax, eax
0x59BE90: jz      short loc_59BE9C
0x59BE92: mov     ecx, [eax]
0x59BE94: push    ecx
0x59BE95: push    offset aS; "%s"
0x59BE9A: jmp     short loc_59BF13
0x59BE9C: xor     eax, eax
0x59BE9E: cmp     edx, 2
0x59BEA1: jnz     short loc_59BF0A
0x59BEA3: movzx   edx, bl
0x59BEA6: push    eax; whichJoystick
0x59BEA7: mov     [esp+38h+var_1C], edx
0x59BEAB: call    InputGlobals__GetJoystickButtonCount
0x59BEB0: mov     ecx, [esp+34h+var_1C]
0x59BEB4: cmp     ecx, eax
0x59BEB6: jge     short loc_59BED6
0x59BEB8: mov     eax, ds:0B38EB0h
0x59BEBD: add     ecx, 1
0x59BEC0: push    ecx
0x59BEC1: push    eax; ArgList
0x59BEC2: lea     ecx, [esp+3Ch+var_18]
0x59BEC6: push    offset aSD_0; "%s %d"
0x59BECB: push    ecx; int
0x59BECC: call    BSStringT_Static_Format
0x59BED1: add     esp, 10h
0x59BED4: jmp     short loc_59BF20
0x59BED6: sub     bl, 20h ; ' '
0x59BED9: cmp     bl, 7
0x59BEDC: ja      short loc_59BEF8
0x59BEDE: mov     ecx, ds:0B398B0h[ecx*4]
0x59BEE5: test    ecx, ecx
0x59BEE7: jz      short loc_59BEF8
0x59BEE9: mov     edx, [ecx]
0x59BEEB: push    edx
0x59BEEC: push    offset aS; "%s"
0x59BEF1: lea     eax, [esp+3Ch+var_18]
0x59BEF5: push    eax
0x59BEF6: jmp     short loc_59BF18
0x59BEF8: push    0; a3
0x59BEFA: push    offset asc_A6B770; "--"
0x59BEFF: lea     ecx, [esp+3Ch+var_18]; this
0x59BF03: call    BSStringT_Set
0x59BF08: jmp     short loc_59BF20
0x59BF0A: movzx   ecx, bl
0x59BF0D: push    ecx; ArgList
0x59BF0E: push    offset aD_0; "%d"
0x59BF13: lea     edx, [esp+3Ch+var_18]
0x59BF17: push    edx; int
0x59BF18: call    BSStringT_Static_Format
0x59BF1D: add     esp, 0Ch
0x59BF20: mov     ebx, [esp+34h+var_18.m_data]
0x59BF24: push    ebx
0x59BF25: push    0FB1h
0x59BF2A: mov     ecx, edi
0x59BF2C: call    Tile_SetString
0x59BF31: fld     dword ptr ds:0A379B4h
0x59BF37: push    ecx
0x59BF38: fstp    [esp+38h+a2]; a3
0x59BF3B: push    0FC9h; a2
0x59BF40: mov     ecx, edi; this
0x59BF42: call    Tile_SetFloat
0x59BF47: fld     dword ptr ds:0A6B1A0h
0x59BF4D: push    ecx
0x59BF4E: fstp    [esp+38h+a2]; a3
0x59BF51: push    0FCCh; a2
0x59BF56: mov     ecx, edi; this
0x59BF58: call    Tile_SetFloat
0x59BF5D: fld     dword ptr ds:0A6B19Ch
0x59BF63: push    ecx
0x59BF64: fstp    [esp+38h+a2]; a3
0x59BF67: push    0FCDh; a2
0x59BF6C: mov     ecx, edi; this
0x59BF6E: call    Tile_SetFloat
0x59BF73: fld     dword ptr ds:0A6B198h
0x59BF79: push    ecx
0x59BF7A: fstp    [esp+38h+a2]; a3
0x59BF7D: push    0FCEh; a2
0x59BF82: mov     ecx, edi; this
0x59BF84: call    Tile_SetFloat
0x59BF89: push    ebx
0x59BF8A: mov     [esp+38h+var_4], 0FFFFFFFFh
0x59BF92: call    FormHeapFree
0x59BF97: xor     eax, eax
0x59BF99: add     esp, 4
0x59BF9C: cmp     ebp, eax
0x59BF9E: mov     [esp+34h+var_18.m_data], eax
0x59BFA2: mov     [esp+34h+var_18.m_bufLen], ax
0x59BFA7: mov     [esp+34h+var_18.m_dataLen], ax
0x59BFAC: jnz     loc_59BDF0
0x59BFB2: cmp     dword ptr ds:0B14ED0h, 1
0x59BFB9: mov     ecx, [esi+4]
0x59BFBC: jnz     short loc_59BFD7
0x59BFBE: mov     eax, ds:0B38EC0h
0x59BFC3: push    eax
0x59BFC4: push    0FB0h
0x59BFC9: call    Tile_SetString
0x59BFCE: mov     ecx, ds:0B38EB8h
0x59BFD4: push    ecx
0x59BFD5: jmp     short loc_59BFEE
0x59BFD7: mov     edx, ds:0B38EB8h
0x59BFDD: push    edx
0x59BFDE: push    0FB0h
0x59BFE3: call    Tile_SetString
0x59BFE8: mov     eax, ds:0B38EC0h
0x59BFED: push    eax
0x59BFEE: mov     ecx, [esi+4]
0x59BFF1: push    0FB1h
0x59BFF6: call    Tile_SetString
0x59BFFB: cmp     dword ptr [esi+0D8h], 0
0x59C002: jz      loc_59C09B
0x59C008: fld     dword ptr ds:0A379B4h
0x59C00E: push    ecx
0x59C00F: mov     ecx, [esi+54h]; this
0x59C012: fstp    [esp+38h+a2]; a3
0x59C015: push    0FC9h; a2
0x59C01A: call    Tile_SetFloat
0x59C01F: fld     dword ptr ds:0A379B4h
0x59C025: push    ecx
0x59C026: mov     ecx, [esi+58h]; this
0x59C029: fstp    [esp+38h+a2]; a3
0x59C02C: push    0FC9h; a2
0x59C031: call    Tile_SetFloat
0x59C036: fldz
0x59C038: push    ecx
0x59C039: fstp    [esp+38h+a2]; a3
0x59C03C: mov     ecx, [esi+0D8h]; this
0x59C042: push    0FDDh; a2
0x59C047: call    Tile_SetFloat
0x59C04C: fld     dword ptr [esi+0DCh]
0x59C052: push    ecx
0x59C053: mov     ecx, [esi+2Ch]; this
0x59C056: fstp    [esp+38h+a2]; a3
0x59C059: push    0FB1h; a2
0x59C05E: call    Tile_SetFloat
0x59C063: fld     dword ptr [esi+0E0h]
0x59C069: push    ecx
0x59C06A: mov     ecx, [esi+2Ch]; this
0x59C06D: fstp    [esp+38h+a2]; a3
0x59C070: push    0FB2h; a2
0x59C075: call    Tile_SetFloat
0x59C07A: fld     dword ptr ds:0A379B4h
0x59C080: push    ecx
0x59C081: mov     ecx, [esi+4]; this
0x59C084: fstp    [esp+38h+a2]; a3
0x59C087: push    0FB2h; a2
0x59C08C: call    Tile_SetFloat
0x59C091: mov     dword ptr [esi+0D8h], 0
0x59C09B: mov     byte ptr [esi+0D4h], 0
0x59C0A2: jmp     short loc_59C0C1
0x59C0A4: mov     ecx, ds:0B33398h
0x59C0AA: mov     ecx, [ecx+20h]; this
0x59C0AD: push    2; a3
0x59C0AF: push    0; a2
0x59C0B1: call    InputGlobals__QueryMouseKeyState
0x59C0B6: test    eax, eax
0x59C0B8: jz      short loc_59C0C1
0x59C0BA: mov     byte ptr [esi+0E4h], 0
0x59C0C1: mov     ecx, [esi+0D8h]; this
0x59C0C7: test    ecx, ecx
0x59C0C9: jz      loc_59C3CF
0x59C0CF: fld1
0x59C0D1: push    ecx
0x59C0D2: fstp    [esp+38h+a2]; a3
0x59C0D5: push    0FDDh; a2
0x59C0DA: call    Tile_SetFloat
0x59C0DF: mov     ecx, [esi+0D8h]
0x59C0E5: push    0FA8h
0x59C0EA: call    Tile_GetFloat
0x59C0EF: call    Double_To_SInt32
0x59C0F4: mov     ebp, eax
0x59C0F6: mov     eax, [esi+5Ch]
0x59C0F9: sub     ebp, 0Eh
0x59C0FC: sub     eax, 0
0x59C0FF: jz      loc_59C342
0x59C105: sub     eax, 1
0x59C108: jz      loc_59C273
0x59C10E: sub     eax, 1
0x59C111: jnz     loc_59C3CF
0x59C117: xor     edi, edi
0x59C119: cmp     byte ptr [esi+0D4h], 0
0x59C120: jnz     short loc_59C17A
0x59C122: mov     edx, ds:0B33398h
0x59C128: mov     ecx, [edx+20h]; this
0x59C12B: push    0; whichJoystick
0x59C12D: call    InputGlobals__GetJoystickButtonCount
0x59C132: cmp     edi, eax
0x59C134: jge     short loc_59C17A
0x59C136: mov     eax, ds:0B33398h
0x59C13B: mov     ecx, [eax+20h]; this
0x59C13E: push    1; a4
0x59C140: push    edi; a3
0x59C141: push    0; a2
0x59C143: call    InputGlobals__QueryJoystickButtonState
0x59C148: test    eax, eax
0x59C14A: jz      short loc_59C16E
0x59C14C: mov     ecx, ds:0B33398h
0x59C152: mov     ecx, [ecx+20h]; this
0x59C155: push    edi; newButton
0x59C156: push    2; whichScheme
0x59C158: push    ebp; whichCtrl
0x59C159: call    InputGlobal__RebindControl
0x59C15E: push    0Bh; int
0x59C160: mov     [esi+0D4h], al
0x59C166: call    sub_57DE50
0x59C16B: add     esp, 4
0x59C16E: add     edi, 1
0x59C171: cmp     byte ptr [esi+0D4h], 0
0x59C178: jz      short loc_59C122
0x59C17A: xor     ebx, ebx
0x59C17C: cmp     [esi+0D4h], bl
0x59C182: jnz     loc_59C21F
0x59C188: jmp     short loc_59C190
0x59C18A: align 10h
0x59C190: mov     edx, ds:0B33398h
0x59C196: mov     ecx, [edx+20h]; this
0x59C199: push    0; a2
0x59C19B: call    InputGlobals__GetJoystickPOVControlCount
0x59C1A0: cmp     ebx, eax
0x59C1A2: jge     short loc_59C21F
0x59C1A4: mov     eax, ds:0B33398h
0x59C1A9: mov     ecx, [eax+20h]; this
0x59C1AC: push    ebx; a3
0x59C1AD: push    0; a2
0x59C1AF: call    sub_403070
0x59C1B4: mov     edi, eax
0x59C1B6: cmp     edi, 0FFFFFFFFh
0x59C1B9: jz      short loc_59C1E6
0x59C1BB: call    dword ptr ds:0A280D0h
0x59C1C1: cmp     eax, ds:0B3B28Ch
0x59C1C7: jb      short loc_59C1E6
0x59C1C9: mov     ecx, ds:0B33398h
0x59C1CF: mov     ecx, [ecx+20h]; this
0x59C1D2: push    edi; newButton
0x59C1D3: push    2; whichScheme
0x59C1D5: push    ebp; whichCtrl
0x59C1D6: call    InputGlobal__RebindControl
0x59C1DB: test    al, al
0x59C1DD: jz      short loc_59C1E6
0x59C1DF: mov     eax, 1
0x59C1E4: jmp     short loc_59C1E8
0x59C1E6: xor     eax, eax
0x59C1E8: push    0Bh; int
0x59C1EA: mov     [esi+0D4h], al
0x59C1F0: call    sub_57DE50
0x59C1F5: add     esp, 4
0x59C1F8: cmp     byte ptr [esi+0D4h], 0
0x59C1FF: jz      short loc_59C20F
0x59C201: call    dword ptr ds:0A280D0h
0x59C207: add     eax, 64h ; 'd'
0x59C20A: mov     ds:0B3B28Ch, eax
0x59C20F: add     ebx, 1
0x59C212: cmp     byte ptr [esi+0D4h], 0
0x59C219: jz      loc_59C190
0x59C21F: mov     edx, ds:0B33398h
0x59C225: mov     ecx, [edx+20h]; this
0x59C228: push    1; a3
0x59C22A: push    1Dh; a2
0x59C22C: call    InputGlobals__QueryControlState
0x59C231: test    eax, eax
0x59C233: jz      loc_59C3CF
0x59C239: push    0FFh; newButton
0x59C23E: mov     byte ptr [esi+0D4h], 1
0x59C245: mov     eax, ds:0B33398h
0x59C24A: mov     ecx, [eax+20h]; this
0x59C24D: push    2; whichScheme
0x59C24F: push    ebp; whichCtrl
0x59C250: call    InputGlobals__RebindControlMinimalChecks
0x59C255: push    0Bh; int
0x59C257: call    sub_57DE50
0x59C25C: add     esp, 4
0x59C25F: mov     ecx, [esp+34h+var_C]
0x59C263: mov     large fs:0, ecx
0x59C26A: pop     ecx
0x59C26B: pop     edi
0x59C26C: pop     esi
0x59C26D: pop     ebp
0x59C26E: pop     ebx
0x59C26F: mov     esp, ebp
0x59C271: pop     ebp
0x59C272: retn
0x59C273: xor     edi, edi
0x59C275: cmp     byte ptr [esi+0D4h], 0
0x59C27C: jnz     short loc_59C2D4
0x59C27E: mov     edi, edi
0x59C280: mov     ecx, ds:0B33398h
0x59C286: mov     ecx, [ecx+20h]
0x59C289: call    sub_4031D0
0x59C28E: cmp     edi, eax
0x59C290: jge     short loc_59C2D4
0x59C292: mov     edx, ds:0B33398h
0x59C298: mov     ecx, [edx+20h]; this
0x59C29B: push    1; a3
0x59C29D: push    edi; a2
0x59C29E: call    InputGlobals__QueryMouseKeyState
0x59C2A3: test    eax, eax
0x59C2A5: jz      short loc_59C2C8
0x59C2A7: push    0Bh; int
0x59C2A9: call    sub_57DE50
0x59C2AE: mov     eax, ds:0B33398h
0x59C2B3: mov     ecx, [eax+20h]; this
0x59C2B6: add     esp, 4
0x59C2B9: push    edi; newButton
0x59C2BA: push    1; whichScheme
0x59C2BC: push    ebp; whichCtrl
0x59C2BD: call    InputGlobal__RebindControl
0x59C2C2: mov     [esi+0D4h], al
0x59C2C8: add     edi, 1
0x59C2CB: cmp     byte ptr [esi+0D4h], 0
0x59C2D2: jz      short loc_59C280
0x59C2D4: mov     ecx, ds:0B33398h
0x59C2DA: mov     ecx, [ecx+20h]; this
0x59C2DD: push    1; a3
0x59C2DF: push    1Dh; a2
0x59C2E1: call    InputGlobals__QueryControlState
0x59C2E6: test    eax, eax
0x59C2E8: jz      short loc_59C311
0x59C2EA: push    0FFh; newButton
0x59C2EF: mov     byte ptr [esi+0D4h], 1
0x59C2F6: mov     edx, ds:0B33398h
0x59C2FC: mov     ecx, [edx+20h]; this
0x59C2FF: push    1; whichScheme
0x59C301: push    ebp; whichCtrl
0x59C302: call    InputGlobals__RebindControlMinimalChecks
0x59C307: push    0Bh; int
0x59C309: call    sub_57DE50
0x59C30E: add     esp, 4
0x59C311: cmp     byte ptr [esi+0D4h], 0
0x59C318: jz      loc_59C3CF
0x59C31E: cmp     edi, 1
0x59C321: jnz     loc_59C3CF
0x59C327: mov     byte ptr [esi+0E4h], 1
0x59C32E: mov     ecx, [esp+34h+var_C]
0x59C332: mov     large fs:0, ecx
0x59C339: pop     ecx
0x59C33A: pop     edi
0x59C33B: pop     esi
0x59C33C: pop     ebp
0x59C33D: pop     ebx
0x59C33E: mov     esp, ebp
0x59C340: pop     ebp
0x59C341: retn
0x59C342: xor     edi, edi
0x59C344: mov     eax, ds:0B33398h
0x59C349: mov     ecx, [eax+20h]; this
0x59C34C: push    1; a3
0x59C34E: push    edi; a2
0x59C34F: call    InputGlobals__QueryKeyboardState
0x59C354: test    eax, eax
0x59C356: jnz     short loc_59C377
0x59C358: add     edi, 1
0x59C35B: test    edi, 100h
0x59C361: jz      short loc_59C344
0x59C363: mov     ecx, [esp+34h+var_C]
0x59C367: mov     large fs:0, ecx
0x59C36E: pop     ecx
0x59C36F: pop     edi
0x59C370: pop     esi
0x59C371: pop     ebp
0x59C372: pop     ebx
0x59C373: mov     esp, ebp
0x59C375: pop     ebp
0x59C376: retn
0x59C377: mov     ecx, ds:0B33398h
0x59C37D: mov     ecx, [ecx+20h]; this
0x59C380: push    edi; newButton
0x59C381: push    0; whichScheme
0x59C383: push    ebp; whichCtrl
0x59C384: call    InputGlobal__RebindControl
0x59C389: test    al, al
0x59C38B: jnz     short loc_59C396
0x59C38D: cmp     edi, 1
0x59C390: jz      short loc_59C396
0x59C392: xor     eax, eax
0x59C394: jmp     short loc_59C39B
0x59C396: mov     eax, 1
0x59C39B: push    0Bh; int
0x59C39D: mov     [esi+0D4h], al
0x59C3A3: call    sub_57DE50
0x59C3A8: add     esp, 4
0x59C3AB: cmp     byte ptr [esi+0D4h], 0
0x59C3B2: jnz     short loc_59C3CF
0x59C3B4: mov     edx, ds:0B38CF0h
0x59C3BA: mov     eax, ds:0B38ED0h
0x59C3BF: push    0
0x59C3C1: push    edx
0x59C3C2: push    1
0x59C3C4: push    0
0x59C3C6: push    eax
0x59C3C7: call    ShowUIMessageBox
0x59C3CC: add     esp, 14h
0x59C3CF: mov     ecx, [esp+34h+var_C]
0x59C3D3: mov     large fs:0, ecx
0x59C3DA: pop     ecx
0x59C3DB: pop     edi
0x59C3DC: pop     esi
0x59C3DD: pop     ebp
0x59C3DE: pop     ebx
0x59C3DF: mov     esp, ebp
0x59C3E1: pop     ebp
0x59C3E2: retn
