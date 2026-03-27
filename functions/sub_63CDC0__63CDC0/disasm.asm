0x63CDC0: push    ecx
0x63CDC1: push    ebp
0x63CDC2: mov     ebp, ecx
0x63CDC4: cmp     byte ptr [ebp+16Ch], 0
0x63CDCB: mov     [esp+8+var_4], ebp
0x63CDCF: jz      loc_63CF9C
0x63CDD5: push    esi
0x63CDD6: mov     esi, [esp+0Ch+a1]
0x63CDDA: mov     eax, [esi]
0x63CDDC: mov     edx, [eax+154h]
0x63CDE2: mov     ecx, esi
0x63CDE4: call    edx
0x63CDE6: test    eax, eax
0x63CDE8: jz      loc_63CF9B
0x63CDEE: mov     eax, [esi]
0x63CDF0: mov     edx, [eax+154h]
0x63CDF6: push    ebx
0x63CDF7: push    edi
0x63CDF8: mov     ecx, esi
0x63CDFA: call    edx
0x63CDFC: push    eax
0x63CDFD: push    0
0x63CDFF: call    GetShadowSceneNode
0x63CE04: add     esp, 4
0x63CE07: mov     ecx, eax
0x63CE09: call    sub_7C5E70
0x63CE0E: mov     eax, [esi]
0x63CE10: mov     edx, [eax+284h]
0x63CE16: push    45h ; 'E'
0x63CE18: mov     ecx, esi
0x63CE1A: xor     bl, bl
0x63CE1C: call    edx
0x63CE1E: test    eax, eax
0x63CE20: jz      short loc_63CE33
0x63CE22: cmp     ds:0B33D80h, bl
0x63CE28: jnz     short loc_63CE33
0x63CE2A: mov     byte ptr ds:0B33D80h, 1
0x63CE31: mov     bl, 1
0x63CE33: mov     ecx, esi
0x63CE35: call    sub_4E1580
0x63CE3A: test    bl, bl
0x63CE3C: jz      short loc_63CE45
0x63CE3E: mov     byte ptr ds:0B33D80h, 0
0x63CE45: mov     eax, [esi]
0x63CE47: mov     edx, [eax+154h]
0x63CE4D: mov     ecx, esi
0x63CE4F: call    edx
0x63CE51: push    eax
0x63CE52: push    0
0x63CE54: call    GetShadowSceneNode
0x63CE59: add     esp, 4
0x63CE5C: mov     ecx, eax
0x63CE5E: call    sub_7C5D00
0x63CE63: mov     ecx, esi; this
0x63CE65: xor     ebx, ebx
0x63CE67: call    Actor_IsNPC
0x63CE6C: test    al, al
0x63CE6E: jz      short loc_63CE7E
0x63CE70: mov     eax, [esi]
0x63CE72: mov     edx, [eax+170h]
0x63CE78: mov     ecx, esi
0x63CE7A: call    edx
0x63CE7C: mov     ebx, eax
0x63CE7E: mov     ecx, esi
0x63CE80: call    sub_5E12B0
0x63CE85: mov     edi, eax
0x63CE87: test    edi, edi
0x63CE89: jz      short loc_63CEAC
0x63CE8B: mov     eax, [esi]
0x63CE8D: mov     edx, [eax+198h]
0x63CE93: mov     ebp, [edi]
0x63CE95: push    1
0x63CE97: push    0
0x63CE99: mov     ecx, esi
0x63CE9B: call    edx
0x63CE9D: mov     ecx, edi
0x63CE9F: push    eax
0x63CEA0: mov     eax, [ebp+9Ch]
0x63CEA6: call    eax
0x63CEA8: mov     ebp, [esp+8+arg_4]
0x63CEAC: test    ebx, ebx
0x63CEAE: jz      short loc_63CEB8
0x63CEB0: push    esi
0x63CEB1: mov     ecx, ebx
0x63CEB3: call    sub_528550
0x63CEB8: mov     edx, [ebp+0]
0x63CEBB: mov     eax, [edx+42Ch]
0x63CEC1: push    0
0x63CEC3: push    1
0x63CEC5: push    1
0x63CEC7: push    esi
0x63CEC8: mov     ecx, ebp
0x63CECA: call    eax
0x63CECC: cmp     byte ptr ds:0B42F3Eh, 0
0x63CED3: jz      short loc_63CF11
0x63CED5: cmp     byte ptr ds:0B42E84h, 0
0x63CEDC: jz      short loc_63CF11
0x63CEDE: cmp     dword ptr ds:0B42F48h, 2
0x63CEE5: jl      short loc_63CF11
0x63CEE7: mov     ecx, esi; this
0x63CEE9: call    Actor_GetRefractionAmount
0x63CEEE: test    al, al
0x63CEF0: jz      short loc_63CF11
0x63CEF2: mov     edi, [esi]
0x63CEF4: lea     ecx, [esi+44h]; this
0x63CEF7: call    ExtraDataList__GetRefractionProperty
0x63CEFC: fld     dword ptr [eax+0Ch]
0x63CEFF: mov     edx, [edi+270h]
0x63CF05: push    ecx
0x63CF06: fstp    [esp+18h+var_18]
0x63CF09: push    1
0x63CF0B: mov     ecx, esi
0x63CF0D: call    edx
0x63CF0F: jmp     short loc_63CF18
0x63CF11: mov     ecx, esi; a1
0x63CF13: call    sub_5EE1B0
0x63CF18: cmp     esi, ds:0B333C4h
0x63CF1E: pop     edi
0x63CF1F: pop     ebx
0x63CF20: jnz     short loc_63CF43
0x63CF22: call    sub_57A310
0x63CF27: test    al, al
0x63CF29: jz      short loc_63CF43
0x63CF2B: mov     ecx, ds:0B333C4h; Concurrency::details::SchedulerBase *
0x63CF31: call    sub_664E60
0x63CF36: pop     esi
0x63CF37: mov     byte ptr [ebp+16Ch], 0
0x63CF3E: pop     ebp
0x63CF3F: pop     ecx
0x63CF40: retn    4
0x63CF43: mov     eax, [esi]
0x63CF45: mov     edx, [eax+154h]
0x63CF4B: mov     ecx, esi
0x63CF4D: call    edx
0x63CF4F: mov     ecx, ds:0B333C4h
0x63CF55: cmp     esi, ecx
0x63CF57: jnz     short loc_63CF6B
0x63CF59: cmp     byte ptr [ecx+588h], 0
0x63CF60: jnz     short loc_63CF6B
0x63CF62: push    0
0x63CF64: mov     ecx, eax
0x63CF66: call    sub_405790
0x63CF6B: push    eax
0x63CF6C: mov     ecx, esi
0x63CF6E: call    sub_5EA1A0
0x63CF73: cmp     esi, ds:0B333C4h
0x63CF79: jz      short loc_63CF94
0x63CF7B: mov     eax, [esi+0Ch]
0x63CF7E: push    eax
0x63CF7F: mov     eax, [esi]
0x63CF81: mov     edx, [eax+154h]
0x63CF87: mov     ecx, esi
0x63CF89: call    edx
0x63CF8B: push    eax
0x63CF8C: call    sub_481410
0x63CF91: add     esp, 8
0x63CF94: mov     byte ptr [ebp+16Ch], 0
0x63CF9B: pop     esi
0x63CF9C: pop     ebp
0x63CF9D: pop     ecx
0x63CF9E: retn    4
