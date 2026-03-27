0x4A8800: sub     esp, 698h
0x4A8806: mov     eax, ds:0B30AACh
0x4A880B: xor     eax, esp
0x4A880D: mov     [esp+698h+var_4], eax
0x4A8814: push    ebx
0x4A8815: push    esi
0x4A8816: mov     esi, [esp+6A0h+arg_0]
0x4A881D: xor     bl, bl
0x4A881F: cmp     dword ptr [esi+4], 0
0x4A8823: push    edi
0x4A8824: mov     edi, ecx
0x4A8826: jz      loc_4A8AC6
0x4A882C: cmp     dword ptr [edi+108h], 0
0x4A8833: setz    al
0x4A8836: test    al, al
0x4A8838: mov     byte ptr [esp+6A4h+var_698+3], al
0x4A883C: jz      short loc_4A8847
0x4A883E: mov     eax, [edi]
0x4A8840: mov     edx, [eax+14h]
0x4A8843: push    1
0x4A8845: call    edx
0x4A8847: cmp     dword ptr [edi+108h], 0
0x4A884E: jz      loc_4A8AB6
0x4A8854: mov     eax, [esi+4]
0x4A8857: push    ebp
0x4A8858: push    eax
0x4A8859: call    Setting_GetTypeFromName
0x4A885E: lea     ecx, [esp+6ACh+AppName]
0x4A8862: push    ecx
0x4A8863: push    esi
0x4A8864: mov     ebp, eax
0x4A8866: call    INISettingCollection_GetSettingSectionName
0x4A886B: lea     edx, [esp+6B4h+KeyName]
0x4A886F: push    edx; Dest
0x4A8870: push    esi; int
0x4A8871: call    INISettingCollection_GetSettingKeyName
0x4A8876: add     esp, 14h
0x4A8879: cmp     ebp, 8; switch 9 cases
0x4A887C: ja      INISettingCollection_LoadSetting___def_4A8882; jumptable 004A8882 default case, cases 2,4
0x4A8882: jmp     ds:jpt_4A8882[ebp*4]; switch jump
0x4A8889: mov     edx, [esi]; jumptable 004A8882 case 6
0x4A888B: lea     eax, [edi+4]
0x4A888E: push    eax; lpFileName
0x4A888F: push    100h; nSize
0x4A8894: lea     ecx, [esp+6B0h+ReturnedString]
0x4A889B: push    ecx; lpReturnedString
0x4A889C: push    edx; lpDefault
0x4A889D: lea     eax, [esp+6B8h+KeyName]
0x4A88A1: push    eax; lpKeyName
0x4A88A2: lea     ecx, [esp+6BCh+AppName]
0x4A88A6: push    ecx; lpAppName
0x4A88A7: call    dword ptr ds:0A280B4h
0x4A88AD: lea     edx, [esp+6A8h+ReturnedString]
0x4A88B4: push    edx
0x4A88B5: mov     ecx, esi
0x4A88B7: call    Setting_SetStringValue
0x4A88BC: jmp     loc_4A8AB5
0x4A88C1: mov     ecx, esi; jumptable 004A8882 case 1
0x4A88C3: call    sub_403BE0
0x4A88C8: mov     edx, [eax]
0x4A88CA: lea     ecx, [edi+4]
0x4A88CD: push    ecx; lpFileName
0x4A88CE: push    edx; nDefault
0x4A88CF: lea     eax, [esp+6B0h+KeyName]
0x4A88D3: push    eax; lpKeyName
0x4A88D4: lea     ecx, [esp+6B4h+AppName]
0x4A88D8: push    ecx; lpAppName
0x4A88D9: call    dword ptr ds:0A280E4h
0x4A88DF: mov     [esi], al
0x4A88E1: jmp     loc_4A8AB5
0x4A88E6: mov     ecx, esi; jumptable 004A8882 case 3
0x4A88E8: call    sub_403BE0
0x4A88ED: mov     eax, [eax]
0x4A88EF: lea     edx, [edi+4]
0x4A88F2: push    edx
0x4A88F3: push    eax
0x4A88F4: lea     ecx, [esp+6B0h+KeyName]
0x4A88F8: push    ecx
0x4A88F9: lea     edx, [esp+6B4h+AppName]
0x4A88FD: push    edx
0x4A88FE: jmp     loc_4A8AAD
0x4A8903: mov     ecx, esi; jumptable 004A8882 case 5
0x4A8905: call    GameSetting_GetSafeFloatPointer
0x4A890A: fld     dword ptr [eax]
0x4A890C: sub     esp, 8
0x4A890F: fstp    [esp+6B0h+var_6B4+4]
0x4A8912: lea     eax, [esp+6B0h+Default]
0x4A8919: push    offset asc_A40540; "%f"
0x4A891E: push    eax
0x4A891F: call    __sprintf
0x4A8924: add     esp, 10h
0x4A8927: lea     ecx, [edi+4]
0x4A892A: push    ecx; lpFileName
0x4A892B: push    100h; nSize
0x4A8930: lea     edx, [esp+6B0h+Src]
0x4A8937: push    edx; lpReturnedString
0x4A8938: lea     eax, [esp+6B4h+Default]
0x4A893F: push    eax; lpDefault
0x4A8940: lea     ecx, [esp+6B8h+KeyName]
0x4A8944: push    ecx; lpKeyName
0x4A8945: lea     edx, [esp+6BCh+AppName]
0x4A8949: push    edx; lpAppName
0x4A894A: call    dword ptr ds:0A280B4h
0x4A8950: test    eax, eax
0x4A8952: jz      loc_4A8AB5
0x4A8958: push    esi
0x4A8959: lea     eax, [esp+6ACh+Src]
0x4A8960: push    offset asc_A40540; "%f"
0x4A8965: push    eax; Src
0x4A8966: call    _sscanf
0x4A896B: add     esp, 0Ch
0x4A896E: cmp     eax, 1
0x4A8971: setz    bl
0x4A8974: jmp     loc_4A8AB5
0x4A8979: lea     ecx, [edi+4]; jumptable 004A8882 case 7
0x4A897C: push    ecx; lpFileName
0x4A897D: push    100h; nSize
0x4A8982: lea     edx, [esp+6B0h+Src]
0x4A8989: push    edx; lpReturnedString
0x4A898A: push    offset EmptyString; lpDefault
0x4A898F: lea     eax, [esp+6B8h+KeyName]
0x4A8993: push    eax; lpKeyName
0x4A8994: lea     ecx, [esp+6BCh+AppName]
0x4A8998: push    ecx; lpAppName
0x4A8999: call    dword ptr ds:0A280B4h
0x4A899F: test    eax, eax
0x4A89A1: jz      loc_4A8AB5
0x4A89A7: lea     edx, [esp+6A8h+var_68C]
0x4A89AB: push    edx
0x4A89AC: lea     eax, [esp+6ACh+var_694]
0x4A89B0: push    eax
0x4A89B1: lea     ecx, [esp+6B0h+var_690]
0x4A89B5: push    ecx
0x4A89B6: lea     edx, [esp+6B4h+Src]
0x4A89BD: push    offset aUUU; "%u,%u,%u"
0x4A89C2: push    edx; Src
0x4A89C3: call    _sscanf
0x4A89C8: mov     ecx, [esp+6BCh+var_690]
0x4A89CC: movzx   edx, byte ptr [esp+6BCh+var_68C]
0x4A89D1: add     esp, 14h
0x4A89D4: cmp     eax, 3
0x4A89D7: movzx   eax, byte ptr [esp+6A8h+var_694]
0x4A89DC: setz    bl
0x4A89DF: shl     ecx, 8
0x4A89E2: or      eax, ecx
0x4A89E4: shl     eax, 8
0x4A89E7: or      eax, edx
0x4A89E9: shl     eax, 8
0x4A89EC: or      eax, 0FFh
0x4A89F1: jmp     loc_4A8AB3
0x4A89F6: lea     eax, [edi+4]; jumptable 004A8882 case 8
0x4A89F9: push    eax; lpFileName
0x4A89FA: push    100h; nSize
0x4A89FF: lea     ecx, [esp+6B0h+Src]
0x4A8A06: push    ecx; lpReturnedString
0x4A8A07: push    offset EmptyString; lpDefault
0x4A8A0C: lea     edx, [esp+6B8h+KeyName]
0x4A8A10: push    edx; lpKeyName
0x4A8A11: lea     eax, [esp+6BCh+AppName]
0x4A8A15: push    eax; lpAppName
0x4A8A16: call    dword ptr ds:0A280B4h
0x4A8A1C: test    eax, eax
0x4A8A1E: jz      loc_4A8AB5
0x4A8A24: lea     ecx, [esp+6A8h+var_68C]
0x4A8A28: push    ecx
0x4A8A29: lea     edx, [esp+6ACh+var_690]
0x4A8A2D: push    edx
0x4A8A2E: lea     eax, [esp+6B0h+var_694]
0x4A8A32: push    eax
0x4A8A33: lea     ecx, [esp+6B4h+var_688]
0x4A8A37: push    ecx
0x4A8A38: lea     edx, [esp+6B8h+Src]
0x4A8A3F: push    offset aUUUU; "%u,%u,%u,%u"
0x4A8A44: push    edx; Src
0x4A8A45: call    _sscanf
0x4A8A4A: mov     ecx, [esp+6C0h+var_690]
0x4A8A4E: mov     edx, [esp+6C0h+var_694]
0x4A8A52: cmp     eax, 4
0x4A8A55: mov     eax, [esp+6C0h+var_68C]
0x4A8A59: push    eax
0x4A8A5A: mov     eax, dword ptr [esp+6C4h+var_688]
0x4A8A5E: push    ecx
0x4A8A5F: push    edx
0x4A8A60: push    eax
0x4A8A61: setz    bl
0x4A8A64: call    INISettingCollection_PackRGBAValue
0x4A8A69: add     esp, 28h
0x4A8A6C: jmp     short loc_4A8AB3
0x4A8A6E: mov     ecx, esi; jumptable 004A8882 case 0
0x4A8A70: call    sub_404DF0
0x4A8A75: xor     ecx, ecx
0x4A8A77: cmp     [eax], cl
0x4A8A79: lea     edx, [edi+4]
0x4A8A7C: setnz   cl
0x4A8A7F: push    edx; lpFileName
0x4A8A80: mov     eax, ecx
0x4A8A82: push    eax; nDefault
0x4A8A83: lea     eax, [esp+6B0h+KeyName]
0x4A8A87: push    eax; lpKeyName
0x4A8A88: lea     ecx, [esp+6B4h+AppName]
0x4A8A8C: push    ecx; lpAppName
0x4A8A8D: call    dword ptr ds:0A280E4h
0x4A8A93: test    eax, eax
0x4A8A95: setnz   dl
0x4A8A98: mov     [esi], dl
0x4A8A9A: jmp     short loc_4A8AB5
0x4A8A9C: mov     ecx, [esi]; jumptable 004A8882 default case, cases 2,4
0x4A8A9E: lea     eax, [edi+4]
0x4A8AA1: push    eax; lpFileName
0x4A8AA2: push    ecx; nDefault
0x4A8AA3: lea     edx, [esp+6B0h+KeyName]
0x4A8AA7: push    edx; lpKeyName
0x4A8AA8: lea     eax, [esp+6B4h+AppName]
0x4A8AAC: push    eax; lpAppName
0x4A8AAD: call    dword ptr ds:0A280E4h
0x4A8AB3: mov     [esi], eax
0x4A8AB5: pop     ebp
0x4A8AB6: cmp     byte ptr [esp+6A4h+var_698+3], 0
0x4A8ABB: jz      short loc_4A8AC6
0x4A8ABD: mov     edx, [edi]
0x4A8ABF: mov     eax, [edx+18h]
0x4A8AC2: mov     ecx, edi
0x4A8AC4: call    eax
0x4A8AC6: mov     ecx, [esp+6A4h+var_4]
0x4A8ACD: pop     edi
0x4A8ACE: pop     esi
0x4A8ACF: mov     al, bl
0x4A8AD1: pop     ebx
0x4A8AD2: xor     ecx, esp
0x4A8AD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A8AD9: add     esp, 698h
0x4A8ADF: retn    4
