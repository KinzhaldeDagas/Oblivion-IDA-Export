0x41BB80: push    0FFFFFFFFh
0x41BB82: push    offset Magic_ConstructGlobalData_SEH
0x41BB87: mov     eax, large fs:0
0x41BB8D: push    eax
0x41BB8E: push    ecx
0x41BB8F: push    esi
0x41BB90: mov     eax, ___security_cookie
0x41BB95: xor     eax, esp
0x41BB97: push    eax
0x41BB98: lea     eax, [esp+18h+var_C]
0x41BB9C: mov     large fs:0, eax
0x41BBA2: mov     ecx, TESDataHandler
0x41BBA8: push    0; int
0x41BBAA: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41BBAF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41BBB4: push    0; int
0x41BBB6: push    12Ch
0x41BBBB: call    TESDataHandler_LookupFormByID
0x41BBC0: push    eax; void *
0x41BBC1: call    OblivionDynamicCast
0x41BBC6: add     esp, 14h
0x41BBC9: or      esi, 0FFFFFFFFh
0x41BBCC: test    eax, eax
0x41BBCE: mov     MagicFailureSoundAlteration, eax
0x41BBD3: jnz     short loc_41BC4C
0x41BBD5: push    44h ; 'D'; Size
0x41BBD7: call    FormHeapAlloc
0x41BBDC: add     esp, 4
0x41BBDF: mov     [esp+18h+var_10], eax
0x41BBE3: test    eax, eax
0x41BBE5: mov     [esp+18h+var_4], 0
0x41BBED: jz      short loc_41BBF8
0x41BBEF: mov     ecx, eax; this
0x41BBF1: call    ??0TESSound@@QAE@XZ
0x41BBF6: jmp     short loc_41BBFA
0x41BBF8: xor     eax, eax
0x41BBFA: push    1; a3
0x41BBFC: push    12Ch; a2
0x41BC01: mov     ecx, eax; this
0x41BC03: mov     [esp+20h+var_4], esi
0x41BC07: mov     MagicFailureSoundAlteration, eax
0x41BC0C: call    TESForm_SetFormID
0x41BC11: mov     ecx, MagicFailureSoundAlteration
0x41BC17: mov     eax, [ecx]
0x41BC19: mov     edx, [eax+0D8h]
0x41BC1F: push    offset aMagicfailureso
0x41BC24: call    edx
0x41BC26: mov     ecx, MagicFailureSoundAlteration
0x41BC2C: mov     eax, [ecx]
0x41BC2E: mov     edx, [eax+90h]
0x41BC34: push    0
0x41BC36: call    edx
0x41BC38: mov     eax, MagicFailureSoundAlteration
0x41BC3D: mov     ecx, TESDataHandler
0x41BC43: push    eax
0x41BC44: add     ecx, 6Ch ; 'l'
0x41BC47: call    BSSimpleList_PushFront
0x41BC4C: mov     ecx, TESDataHandler
0x41BC52: push    0; int
0x41BC54: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41BC59: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41BC5E: push    0; int
0x41BC60: push    12Dh
0x41BC65: call    TESDataHandler_LookupFormByID
0x41BC6A: push    eax; void *
0x41BC6B: call    OblivionDynamicCast
0x41BC70: add     esp, 14h
0x41BC73: test    eax, eax
0x41BC75: mov     MagicFailureSoundConjuration, eax
0x41BC7A: jnz     short loc_41BCF4
0x41BC7C: push    44h ; 'D'; Size
0x41BC7E: call    FormHeapAlloc
0x41BC83: add     esp, 4
0x41BC86: mov     [esp+18h+var_10], eax
0x41BC8A: test    eax, eax
0x41BC8C: mov     [esp+18h+var_4], 1
0x41BC94: jz      short loc_41BC9F
0x41BC96: mov     ecx, eax; this
0x41BC98: call    ??0TESSound@@QAE@XZ
0x41BC9D: jmp     short loc_41BCA1
0x41BC9F: xor     eax, eax
0x41BCA1: push    1; a3
0x41BCA3: push    12Dh; a2
0x41BCA8: mov     ecx, eax; this
0x41BCAA: mov     [esp+20h+var_4], esi
0x41BCAE: mov     MagicFailureSoundConjuration, eax
0x41BCB3: call    TESForm_SetFormID
0x41BCB8: mov     ecx, MagicFailureSoundConjuration
0x41BCBE: mov     edx, [ecx]
0x41BCC0: mov     eax, [edx+0D8h]
0x41BCC6: push    offset aMagicfailure_0
0x41BCCB: call    eax
0x41BCCD: mov     ecx, MagicFailureSoundConjuration
0x41BCD3: mov     edx, [ecx]
0x41BCD5: mov     eax, [edx+90h]
0x41BCDB: push    0
0x41BCDD: call    eax
0x41BCDF: mov     ecx, MagicFailureSoundConjuration
0x41BCE5: push    ecx
0x41BCE6: mov     ecx, TESDataHandler
0x41BCEC: add     ecx, 6Ch ; 'l'
0x41BCEF: call    BSSimpleList_PushFront
0x41BCF4: mov     ecx, TESDataHandler
0x41BCFA: push    0; int
0x41BCFC: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41BD01: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41BD06: push    0; int
0x41BD08: push    12Eh
0x41BD0D: call    TESDataHandler_LookupFormByID
0x41BD12: push    eax; void *
0x41BD13: call    OblivionDynamicCast
0x41BD18: add     esp, 14h
0x41BD1B: test    eax, eax
0x41BD1D: mov     MagicFailureSoundDestruction, eax
0x41BD22: jnz     short loc_41BD9C
0x41BD24: push    44h ; 'D'; Size
0x41BD26: call    FormHeapAlloc
0x41BD2B: add     esp, 4
0x41BD2E: mov     [esp+18h+var_10], eax
0x41BD32: test    eax, eax
0x41BD34: mov     [esp+18h+var_4], 2
0x41BD3C: jz      short loc_41BD47
0x41BD3E: mov     ecx, eax; this
0x41BD40: call    ??0TESSound@@QAE@XZ
0x41BD45: jmp     short loc_41BD49
0x41BD47: xor     eax, eax
0x41BD49: push    1; a3
0x41BD4B: push    12Eh; a2
0x41BD50: mov     ecx, eax; this
0x41BD52: mov     [esp+20h+var_4], esi
0x41BD56: mov     MagicFailureSoundDestruction, eax
0x41BD5B: call    TESForm_SetFormID
0x41BD60: mov     ecx, MagicFailureSoundDestruction
0x41BD66: mov     edx, [ecx]
0x41BD68: mov     eax, [edx+0D8h]
0x41BD6E: push    offset aMagicfailure_1
0x41BD73: call    eax
0x41BD75: mov     ecx, MagicFailureSoundDestruction
0x41BD7B: mov     edx, [ecx]
0x41BD7D: mov     eax, [edx+90h]
0x41BD83: push    0
0x41BD85: call    eax
0x41BD87: mov     ecx, MagicFailureSoundDestruction
0x41BD8D: push    ecx
0x41BD8E: mov     ecx, TESDataHandler
0x41BD94: add     ecx, 6Ch ; 'l'
0x41BD97: call    BSSimpleList_PushFront
0x41BD9C: mov     ecx, TESDataHandler
0x41BDA2: push    0; int
0x41BDA4: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41BDA9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41BDAE: push    0; int
0x41BDB0: push    12Fh
0x41BDB5: call    TESDataHandler_LookupFormByID
0x41BDBA: push    eax; void *
0x41BDBB: call    OblivionDynamicCast
0x41BDC0: add     esp, 14h
0x41BDC3: test    eax, eax
0x41BDC5: mov     MagicFailureSoundIllusion, eax
0x41BDCA: jnz     short loc_41BE44
0x41BDCC: push    44h ; 'D'; Size
0x41BDCE: call    FormHeapAlloc
0x41BDD3: add     esp, 4
0x41BDD6: mov     [esp+18h+var_10], eax
0x41BDDA: test    eax, eax
0x41BDDC: mov     [esp+18h+var_4], 3
0x41BDE4: jz      short loc_41BDEF
0x41BDE6: mov     ecx, eax; this
0x41BDE8: call    ??0TESSound@@QAE@XZ
0x41BDED: jmp     short loc_41BDF1
0x41BDEF: xor     eax, eax
0x41BDF1: push    1; a3
0x41BDF3: push    12Fh; a2
0x41BDF8: mov     ecx, eax; this
0x41BDFA: mov     [esp+20h+var_4], esi
0x41BDFE: mov     MagicFailureSoundIllusion, eax
0x41BE03: call    TESForm_SetFormID
0x41BE08: mov     ecx, MagicFailureSoundIllusion
0x41BE0E: mov     edx, [ecx]
0x41BE10: mov     eax, [edx+0D8h]
0x41BE16: push    offset aMagicfailure_2
0x41BE1B: call    eax
0x41BE1D: mov     ecx, MagicFailureSoundIllusion
0x41BE23: mov     edx, [ecx]
0x41BE25: mov     eax, [edx+90h]
0x41BE2B: push    0
0x41BE2D: call    eax
0x41BE2F: mov     ecx, MagicFailureSoundIllusion
0x41BE35: push    ecx
0x41BE36: mov     ecx, TESDataHandler
0x41BE3C: add     ecx, 6Ch ; 'l'
0x41BE3F: call    BSSimpleList_PushFront
0x41BE44: mov     ecx, TESDataHandler
0x41BE4A: push    0; int
0x41BE4C: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41BE51: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41BE56: push    0; int
0x41BE58: push    130h
0x41BE5D: call    TESDataHandler_LookupFormByID
0x41BE62: push    eax; void *
0x41BE63: call    OblivionDynamicCast
0x41BE68: add     esp, 14h
0x41BE6B: test    eax, eax
0x41BE6D: mov     MagicFailureSoundMysticism, eax
0x41BE72: jnz     short loc_41BEEC
0x41BE74: push    44h ; 'D'; Size
0x41BE76: call    FormHeapAlloc
0x41BE7B: add     esp, 4
0x41BE7E: mov     [esp+18h+var_10], eax
0x41BE82: test    eax, eax
0x41BE84: mov     [esp+18h+var_4], 4
0x41BE8C: jz      short loc_41BE97
0x41BE8E: mov     ecx, eax; this
0x41BE90: call    ??0TESSound@@QAE@XZ
0x41BE95: jmp     short loc_41BE99
0x41BE97: xor     eax, eax
0x41BE99: push    1; a3
0x41BE9B: push    130h; a2
0x41BEA0: mov     ecx, eax; this
0x41BEA2: mov     [esp+20h+var_4], esi
0x41BEA6: mov     MagicFailureSoundMysticism, eax
0x41BEAB: call    TESForm_SetFormID
0x41BEB0: mov     ecx, MagicFailureSoundMysticism
0x41BEB6: mov     edx, [ecx]
0x41BEB8: mov     eax, [edx+0D8h]
0x41BEBE: push    offset aMagicfailure_3
0x41BEC3: call    eax
0x41BEC5: mov     ecx, MagicFailureSoundMysticism
0x41BECB: mov     edx, [ecx]
0x41BECD: mov     eax, [edx+90h]
0x41BED3: push    0
0x41BED5: call    eax
0x41BED7: mov     ecx, MagicFailureSoundMysticism
0x41BEDD: push    ecx
0x41BEDE: mov     ecx, TESDataHandler
0x41BEE4: add     ecx, 6Ch ; 'l'
0x41BEE7: call    BSSimpleList_PushFront
0x41BEEC: mov     ecx, TESDataHandler
0x41BEF2: push    0; int
0x41BEF4: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41BEF9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41BEFE: push    0; int
0x41BF00: push    131h
0x41BF05: call    TESDataHandler_LookupFormByID
0x41BF0A: push    eax; void *
0x41BF0B: call    OblivionDynamicCast
0x41BF10: add     esp, 14h
0x41BF13: test    eax, eax
0x41BF15: mov     MagicFailureSoundRestoration, eax
0x41BF1A: jnz     short loc_41BF94
0x41BF1C: push    44h ; 'D'; Size
0x41BF1E: call    FormHeapAlloc
0x41BF23: add     esp, 4
0x41BF26: mov     [esp+18h+var_10], eax
0x41BF2A: test    eax, eax
0x41BF2C: mov     [esp+18h+var_4], 5
0x41BF34: jz      short loc_41BF3F
0x41BF36: mov     ecx, eax; this
0x41BF38: call    ??0TESSound@@QAE@XZ
0x41BF3D: jmp     short loc_41BF41
0x41BF3F: xor     eax, eax
0x41BF41: push    1; a3
0x41BF43: push    131h; a2
0x41BF48: mov     ecx, eax; this
0x41BF4A: mov     [esp+20h+var_4], esi
0x41BF4E: mov     MagicFailureSoundRestoration, eax
0x41BF53: call    TESForm_SetFormID
0x41BF58: mov     ecx, MagicFailureSoundRestoration
0x41BF5E: mov     edx, [ecx]
0x41BF60: mov     eax, [edx+0D8h]
0x41BF66: push    offset aMagicfailure_4
0x41BF6B: call    eax
0x41BF6D: mov     ecx, MagicFailureSoundRestoration
0x41BF73: mov     edx, [ecx]
0x41BF75: mov     eax, [edx+90h]
0x41BF7B: push    0
0x41BF7D: call    eax
0x41BF7F: mov     ecx, MagicFailureSoundRestoration
0x41BF85: push    ecx
0x41BF86: mov     ecx, TESDataHandler
0x41BF8C: add     ecx, 6Ch ; 'l'
0x41BF8F: call    BSSimpleList_PushFront
0x41BF94: mov     ecx, TESDataHandler
0x41BF9A: push    0; int
0x41BF9C: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41BFA1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41BFA6: push    0; int
0x41BFA8: push    138h
0x41BFAD: call    TESDataHandler_LookupFormByID
0x41BFB2: push    eax; void *
0x41BFB3: call    OblivionDynamicCast
0x41BFB8: add     esp, 14h
0x41BFBB: test    eax, eax
0x41BFBD: mov     MagicEnchantDrawSoundAlteration, eax
0x41BFC2: jnz     short loc_41C03C
0x41BFC4: push    44h ; 'D'; Size
0x41BFC6: call    FormHeapAlloc
0x41BFCB: add     esp, 4
0x41BFCE: mov     [esp+18h+var_10], eax
0x41BFD2: test    eax, eax
0x41BFD4: mov     [esp+18h+var_4], 6
0x41BFDC: jz      short loc_41BFE7
0x41BFDE: mov     ecx, eax; this
0x41BFE0: call    ??0TESSound@@QAE@XZ
0x41BFE5: jmp     short loc_41BFE9
0x41BFE7: xor     eax, eax
0x41BFE9: push    1; a3
0x41BFEB: push    138h; a2
0x41BFF0: mov     ecx, eax; this
0x41BFF2: mov     [esp+20h+var_4], esi
0x41BFF6: mov     MagicEnchantDrawSoundAlteration, eax
0x41BFFB: call    TESForm_SetFormID
0x41C000: mov     ecx, MagicEnchantDrawSoundAlteration
0x41C006: mov     edx, [ecx]
0x41C008: mov     eax, [edx+0D8h]
0x41C00E: push    offset aMagicenchantdr
0x41C013: call    eax
0x41C015: mov     ecx, MagicEnchantDrawSoundAlteration
0x41C01B: mov     edx, [ecx]
0x41C01D: mov     eax, [edx+90h]
0x41C023: push    0
0x41C025: call    eax
0x41C027: mov     ecx, MagicEnchantDrawSoundAlteration
0x41C02D: push    ecx
0x41C02E: mov     ecx, TESDataHandler
0x41C034: add     ecx, 6Ch ; 'l'
0x41C037: call    BSSimpleList_PushFront
0x41C03C: mov     ecx, TESDataHandler
0x41C042: push    0; int
0x41C044: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C049: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C04E: push    0; int
0x41C050: push    139h
0x41C055: call    TESDataHandler_LookupFormByID
0x41C05A: push    eax; void *
0x41C05B: call    OblivionDynamicCast
0x41C060: add     esp, 14h
0x41C063: test    eax, eax
0x41C065: mov     MagicEnchantDrawSoundConjuration, eax
0x41C06A: jnz     short loc_41C0E4
0x41C06C: push    44h ; 'D'; Size
0x41C06E: call    FormHeapAlloc
0x41C073: add     esp, 4
0x41C076: mov     [esp+18h+var_10], eax
0x41C07A: test    eax, eax
0x41C07C: mov     [esp+18h+var_4], 7
0x41C084: jz      short loc_41C08F
0x41C086: mov     ecx, eax; this
0x41C088: call    ??0TESSound@@QAE@XZ
0x41C08D: jmp     short loc_41C091
0x41C08F: xor     eax, eax
0x41C091: push    1; a3
0x41C093: push    139h; a2
0x41C098: mov     ecx, eax; this
0x41C09A: mov     [esp+20h+var_4], esi
0x41C09E: mov     MagicEnchantDrawSoundConjuration, eax
0x41C0A3: call    TESForm_SetFormID
0x41C0A8: mov     ecx, MagicEnchantDrawSoundConjuration
0x41C0AE: mov     edx, [ecx]
0x41C0B0: mov     eax, [edx+0D8h]
0x41C0B6: push    offset aMagicenchant_0
0x41C0BB: call    eax
0x41C0BD: mov     ecx, MagicEnchantDrawSoundConjuration
0x41C0C3: mov     edx, [ecx]
0x41C0C5: mov     eax, [edx+90h]
0x41C0CB: push    0
0x41C0CD: call    eax
0x41C0CF: mov     ecx, MagicEnchantDrawSoundConjuration
0x41C0D5: push    ecx
0x41C0D6: mov     ecx, TESDataHandler
0x41C0DC: add     ecx, 6Ch ; 'l'
0x41C0DF: call    BSSimpleList_PushFront
0x41C0E4: mov     ecx, TESDataHandler
0x41C0EA: push    0; int
0x41C0EC: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C0F1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C0F6: push    0; int
0x41C0F8: push    13Ah
0x41C0FD: call    TESDataHandler_LookupFormByID
0x41C102: push    eax; void *
0x41C103: call    OblivionDynamicCast
0x41C108: add     esp, 14h
0x41C10B: test    eax, eax
0x41C10D: mov     MagicEnchantDrawSoundDestruction, eax
0x41C112: jnz     short loc_41C18C
0x41C114: push    44h ; 'D'; Size
0x41C116: call    FormHeapAlloc
0x41C11B: add     esp, 4
0x41C11E: mov     [esp+18h+var_10], eax
0x41C122: test    eax, eax
0x41C124: mov     [esp+18h+var_4], 8
0x41C12C: jz      short loc_41C137
0x41C12E: mov     ecx, eax; this
0x41C130: call    ??0TESSound@@QAE@XZ
0x41C135: jmp     short loc_41C139
0x41C137: xor     eax, eax
0x41C139: push    1; a3
0x41C13B: push    13Ah; a2
0x41C140: mov     ecx, eax; this
0x41C142: mov     [esp+20h+var_4], esi
0x41C146: mov     MagicEnchantDrawSoundDestruction, eax
0x41C14B: call    TESForm_SetFormID
0x41C150: mov     ecx, MagicEnchantDrawSoundDestruction
0x41C156: mov     edx, [ecx]
0x41C158: mov     eax, [edx+0D8h]
0x41C15E: push    offset aMagicenchant_1
0x41C163: call    eax
0x41C165: mov     ecx, MagicEnchantDrawSoundDestruction
0x41C16B: mov     edx, [ecx]
0x41C16D: mov     eax, [edx+90h]
0x41C173: push    0
0x41C175: call    eax
0x41C177: mov     ecx, MagicEnchantDrawSoundDestruction
0x41C17D: push    ecx
0x41C17E: mov     ecx, TESDataHandler
0x41C184: add     ecx, 6Ch ; 'l'
0x41C187: call    BSSimpleList_PushFront
0x41C18C: mov     ecx, TESDataHandler
0x41C192: push    0; int
0x41C194: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C199: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C19E: push    0; int
0x41C1A0: push    13Bh
0x41C1A5: call    TESDataHandler_LookupFormByID
0x41C1AA: push    eax; void *
0x41C1AB: call    OblivionDynamicCast
0x41C1B0: add     esp, 14h
0x41C1B3: test    eax, eax
0x41C1B5: mov     MagicEnchantDrawSoundIllusion, eax
0x41C1BA: jnz     short loc_41C234
0x41C1BC: push    44h ; 'D'; Size
0x41C1BE: call    FormHeapAlloc
0x41C1C3: add     esp, 4
0x41C1C6: mov     [esp+18h+var_10], eax
0x41C1CA: test    eax, eax
0x41C1CC: mov     [esp+18h+var_4], 9
0x41C1D4: jz      short loc_41C1DF
0x41C1D6: mov     ecx, eax; this
0x41C1D8: call    ??0TESSound@@QAE@XZ
0x41C1DD: jmp     short loc_41C1E1
0x41C1DF: xor     eax, eax
0x41C1E1: push    1; a3
0x41C1E3: push    13Bh; a2
0x41C1E8: mov     ecx, eax; this
0x41C1EA: mov     [esp+20h+var_4], esi
0x41C1EE: mov     MagicEnchantDrawSoundIllusion, eax
0x41C1F3: call    TESForm_SetFormID
0x41C1F8: mov     ecx, MagicEnchantDrawSoundIllusion
0x41C1FE: mov     edx, [ecx]
0x41C200: mov     eax, [edx+0D8h]
0x41C206: push    offset aMagicenchant_2
0x41C20B: call    eax
0x41C20D: mov     ecx, MagicEnchantDrawSoundIllusion
0x41C213: mov     edx, [ecx]
0x41C215: mov     eax, [edx+90h]
0x41C21B: push    0
0x41C21D: call    eax
0x41C21F: mov     ecx, MagicEnchantDrawSoundIllusion
0x41C225: push    ecx
0x41C226: mov     ecx, TESDataHandler
0x41C22C: add     ecx, 6Ch ; 'l'
0x41C22F: call    BSSimpleList_PushFront
0x41C234: mov     ecx, TESDataHandler
0x41C23A: push    0; int
0x41C23C: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C241: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C246: push    0; int
0x41C248: push    13Ch
0x41C24D: call    TESDataHandler_LookupFormByID
0x41C252: push    eax; void *
0x41C253: call    OblivionDynamicCast
0x41C258: add     esp, 14h
0x41C25B: test    eax, eax
0x41C25D: mov     MagicEnchantDrawSoundMysticism, eax
0x41C262: jnz     short loc_41C2DC
0x41C264: push    44h ; 'D'; Size
0x41C266: call    FormHeapAlloc
0x41C26B: add     esp, 4
0x41C26E: mov     [esp+18h+var_10], eax
0x41C272: test    eax, eax
0x41C274: mov     [esp+18h+var_4], 0Ah
0x41C27C: jz      short loc_41C287
0x41C27E: mov     ecx, eax; this
0x41C280: call    ??0TESSound@@QAE@XZ
0x41C285: jmp     short loc_41C289
0x41C287: xor     eax, eax
0x41C289: push    1; a3
0x41C28B: push    13Ch; a2
0x41C290: mov     ecx, eax; this
0x41C292: mov     [esp+20h+var_4], esi
0x41C296: mov     MagicEnchantDrawSoundMysticism, eax
0x41C29B: call    TESForm_SetFormID
0x41C2A0: mov     ecx, MagicEnchantDrawSoundMysticism
0x41C2A6: mov     edx, [ecx]
0x41C2A8: mov     eax, [edx+0D8h]
0x41C2AE: push    offset aMagicenchant_3
0x41C2B3: call    eax
0x41C2B5: mov     ecx, MagicEnchantDrawSoundMysticism
0x41C2BB: mov     edx, [ecx]
0x41C2BD: mov     eax, [edx+90h]
0x41C2C3: push    0
0x41C2C5: call    eax
0x41C2C7: mov     ecx, MagicEnchantDrawSoundMysticism
0x41C2CD: push    ecx
0x41C2CE: mov     ecx, TESDataHandler
0x41C2D4: add     ecx, 6Ch ; 'l'
0x41C2D7: call    BSSimpleList_PushFront
0x41C2DC: mov     ecx, TESDataHandler
0x41C2E2: push    0; int
0x41C2E4: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C2E9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C2EE: push    0; int
0x41C2F0: push    13Dh
0x41C2F5: call    TESDataHandler_LookupFormByID
0x41C2FA: push    eax; void *
0x41C2FB: call    OblivionDynamicCast
0x41C300: add     esp, 14h
0x41C303: test    eax, eax
0x41C305: mov     MagicEnchantDrawSoundRestoration, eax
0x41C30A: jnz     short loc_41C384
0x41C30C: push    44h ; 'D'; Size
0x41C30E: call    FormHeapAlloc
0x41C313: add     esp, 4
0x41C316: mov     [esp+18h+var_10], eax
0x41C31A: test    eax, eax
0x41C31C: mov     [esp+18h+var_4], 0Bh
0x41C324: jz      short loc_41C32F
0x41C326: mov     ecx, eax; this
0x41C328: call    ??0TESSound@@QAE@XZ
0x41C32D: jmp     short loc_41C331
0x41C32F: xor     eax, eax
0x41C331: push    1; a3
0x41C333: push    13Dh; a2
0x41C338: mov     ecx, eax; this
0x41C33A: mov     [esp+20h+var_4], esi
0x41C33E: mov     MagicEnchantDrawSoundRestoration, eax
0x41C343: call    TESForm_SetFormID
0x41C348: mov     ecx, MagicEnchantDrawSoundRestoration
0x41C34E: mov     edx, [ecx]
0x41C350: mov     eax, [edx+0D8h]
0x41C356: push    offset aMagicenchant_4
0x41C35B: call    eax
0x41C35D: mov     ecx, MagicEnchantDrawSoundRestoration
0x41C363: mov     edx, [ecx]
0x41C365: mov     eax, [edx+90h]
0x41C36B: push    0
0x41C36D: call    eax
0x41C36F: mov     ecx, MagicEnchantDrawSoundRestoration
0x41C375: push    ecx
0x41C376: mov     ecx, TESDataHandler
0x41C37C: add     ecx, 6Ch ; 'l'
0x41C37F: call    BSSimpleList_PushFront
0x41C384: mov     ecx, TESDataHandler
0x41C38A: push    0; int
0x41C38C: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C391: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C396: push    0; int
0x41C398: push    13Eh
0x41C39D: call    TESDataHandler_LookupFormByID
0x41C3A2: push    eax; void *
0x41C3A3: call    OblivionDynamicCast
0x41C3A8: add     esp, 14h
0x41C3AB: test    eax, eax
0x41C3AD: mov     MagicEnchantHitSoundAlteration, eax
0x41C3B2: jnz     short loc_41C42C
0x41C3B4: push    44h ; 'D'; Size
0x41C3B6: call    FormHeapAlloc
0x41C3BB: add     esp, 4
0x41C3BE: mov     [esp+18h+var_10], eax
0x41C3C2: test    eax, eax
0x41C3C4: mov     [esp+18h+var_4], 0Ch
0x41C3CC: jz      short loc_41C3D7
0x41C3CE: mov     ecx, eax; this
0x41C3D0: call    ??0TESSound@@QAE@XZ
0x41C3D5: jmp     short loc_41C3D9
0x41C3D7: xor     eax, eax
0x41C3D9: push    1; a3
0x41C3DB: push    13Eh; a2
0x41C3E0: mov     ecx, eax; this
0x41C3E2: mov     [esp+20h+var_4], esi
0x41C3E6: mov     MagicEnchantHitSoundAlteration, eax
0x41C3EB: call    TESForm_SetFormID
0x41C3F0: mov     ecx, MagicEnchantHitSoundAlteration
0x41C3F6: mov     edx, [ecx]
0x41C3F8: mov     eax, [edx+0D8h]
0x41C3FE: push    offset aMagicenchanthi
0x41C403: call    eax
0x41C405: mov     ecx, MagicEnchantHitSoundAlteration
0x41C40B: mov     edx, [ecx]
0x41C40D: mov     eax, [edx+90h]
0x41C413: push    0
0x41C415: call    eax
0x41C417: mov     ecx, MagicEnchantHitSoundAlteration
0x41C41D: push    ecx
0x41C41E: mov     ecx, TESDataHandler
0x41C424: add     ecx, 6Ch ; 'l'
0x41C427: call    BSSimpleList_PushFront
0x41C42C: mov     ecx, TESDataHandler
0x41C432: push    0; int
0x41C434: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C439: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C43E: push    0; int
0x41C440: push    13Fh
0x41C445: call    TESDataHandler_LookupFormByID
0x41C44A: push    eax; void *
0x41C44B: call    OblivionDynamicCast
0x41C450: add     esp, 14h
0x41C453: test    eax, eax
0x41C455: mov     MagicEnchantHitSoundConjuration, eax
0x41C45A: jnz     short loc_41C4D4
0x41C45C: push    44h ; 'D'; Size
0x41C45E: call    FormHeapAlloc
0x41C463: add     esp, 4
0x41C466: mov     [esp+18h+var_10], eax
0x41C46A: test    eax, eax
0x41C46C: mov     [esp+18h+var_4], 0Dh
0x41C474: jz      short loc_41C47F
0x41C476: mov     ecx, eax; this
0x41C478: call    ??0TESSound@@QAE@XZ
0x41C47D: jmp     short loc_41C481
0x41C47F: xor     eax, eax
0x41C481: push    1; a3
0x41C483: push    13Fh; a2
0x41C488: mov     ecx, eax; this
0x41C48A: mov     [esp+20h+var_4], esi
0x41C48E: mov     MagicEnchantHitSoundConjuration, eax
0x41C493: call    TESForm_SetFormID
0x41C498: mov     ecx, MagicEnchantHitSoundConjuration
0x41C49E: mov     edx, [ecx]
0x41C4A0: mov     eax, [edx+0D8h]
0x41C4A6: push    offset aMagicenchant_5
0x41C4AB: call    eax
0x41C4AD: mov     ecx, MagicEnchantHitSoundConjuration
0x41C4B3: mov     edx, [ecx]
0x41C4B5: mov     eax, [edx+90h]
0x41C4BB: push    0
0x41C4BD: call    eax
0x41C4BF: mov     ecx, MagicEnchantHitSoundConjuration
0x41C4C5: push    ecx
0x41C4C6: mov     ecx, TESDataHandler
0x41C4CC: add     ecx, 6Ch ; 'l'
0x41C4CF: call    BSSimpleList_PushFront
0x41C4D4: mov     ecx, TESDataHandler
0x41C4DA: push    0; int
0x41C4DC: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C4E1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C4E6: push    0; int
0x41C4E8: push    140h
0x41C4ED: call    TESDataHandler_LookupFormByID
0x41C4F2: push    eax; void *
0x41C4F3: call    OblivionDynamicCast
0x41C4F8: add     esp, 14h
0x41C4FB: test    eax, eax
0x41C4FD: mov     MagicEnchantHitSoundDestruction, eax
0x41C502: jnz     short loc_41C57C
0x41C504: push    44h ; 'D'; Size
0x41C506: call    FormHeapAlloc
0x41C50B: add     esp, 4
0x41C50E: mov     [esp+18h+var_10], eax
0x41C512: test    eax, eax
0x41C514: mov     [esp+18h+var_4], 0Eh
0x41C51C: jz      short loc_41C527
0x41C51E: mov     ecx, eax; this
0x41C520: call    ??0TESSound@@QAE@XZ
0x41C525: jmp     short loc_41C529
0x41C527: xor     eax, eax
0x41C529: push    1; a3
0x41C52B: push    140h; a2
0x41C530: mov     ecx, eax; this
0x41C532: mov     [esp+20h+var_4], esi
0x41C536: mov     MagicEnchantHitSoundDestruction, eax
0x41C53B: call    TESForm_SetFormID
0x41C540: mov     ecx, MagicEnchantHitSoundDestruction
0x41C546: mov     edx, [ecx]
0x41C548: mov     eax, [edx+0D8h]
0x41C54E: push    offset aMagicenchant_6
0x41C553: call    eax
0x41C555: mov     ecx, MagicEnchantHitSoundDestruction
0x41C55B: mov     edx, [ecx]
0x41C55D: mov     eax, [edx+90h]
0x41C563: push    0
0x41C565: call    eax
0x41C567: mov     ecx, MagicEnchantHitSoundDestruction
0x41C56D: push    ecx
0x41C56E: mov     ecx, TESDataHandler
0x41C574: add     ecx, 6Ch ; 'l'
0x41C577: call    BSSimpleList_PushFront
0x41C57C: mov     ecx, TESDataHandler
0x41C582: push    0; int
0x41C584: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C589: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C58E: push    0; int
0x41C590: push    141h
0x41C595: call    TESDataHandler_LookupFormByID
0x41C59A: push    eax; void *
0x41C59B: call    OblivionDynamicCast
0x41C5A0: add     esp, 14h
0x41C5A3: test    eax, eax
0x41C5A5: mov     MagicEnchantHitSoundIllusion, eax
0x41C5AA: jnz     short loc_41C624
0x41C5AC: push    44h ; 'D'; Size
0x41C5AE: call    FormHeapAlloc
0x41C5B3: add     esp, 4
0x41C5B6: mov     [esp+18h+var_10], eax
0x41C5BA: test    eax, eax
0x41C5BC: mov     [esp+18h+var_4], 0Fh
0x41C5C4: jz      short loc_41C5CF
0x41C5C6: mov     ecx, eax; this
0x41C5C8: call    ??0TESSound@@QAE@XZ
0x41C5CD: jmp     short loc_41C5D1
0x41C5CF: xor     eax, eax
0x41C5D1: push    1; a3
0x41C5D3: push    141h; a2
0x41C5D8: mov     ecx, eax; this
0x41C5DA: mov     [esp+20h+var_4], esi
0x41C5DE: mov     MagicEnchantHitSoundIllusion, eax
0x41C5E3: call    TESForm_SetFormID
0x41C5E8: mov     ecx, MagicEnchantHitSoundIllusion
0x41C5EE: mov     edx, [ecx]
0x41C5F0: mov     eax, [edx+0D8h]
0x41C5F6: push    offset aMagicenchant_7
0x41C5FB: call    eax
0x41C5FD: mov     ecx, MagicEnchantHitSoundIllusion
0x41C603: mov     edx, [ecx]
0x41C605: mov     eax, [edx+90h]
0x41C60B: push    0
0x41C60D: call    eax
0x41C60F: mov     ecx, MagicEnchantHitSoundIllusion
0x41C615: push    ecx
0x41C616: mov     ecx, TESDataHandler
0x41C61C: add     ecx, 6Ch ; 'l'
0x41C61F: call    BSSimpleList_PushFront
0x41C624: mov     ecx, TESDataHandler
0x41C62A: push    0; int
0x41C62C: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C631: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C636: push    0; int
0x41C638: push    142h
0x41C63D: call    TESDataHandler_LookupFormByID
0x41C642: push    eax; void *
0x41C643: call    OblivionDynamicCast
0x41C648: add     esp, 14h
0x41C64B: test    eax, eax
0x41C64D: mov     MagicEnchantHitSoundMysticism, eax
0x41C652: jnz     short loc_41C6CC
0x41C654: push    44h ; 'D'; Size
0x41C656: call    FormHeapAlloc
0x41C65B: add     esp, 4
0x41C65E: mov     [esp+18h+var_10], eax
0x41C662: test    eax, eax
0x41C664: mov     [esp+18h+var_4], 10h
0x41C66C: jz      short loc_41C677
0x41C66E: mov     ecx, eax; this
0x41C670: call    ??0TESSound@@QAE@XZ
0x41C675: jmp     short loc_41C679
0x41C677: xor     eax, eax
0x41C679: push    1; a3
0x41C67B: push    142h; a2
0x41C680: mov     ecx, eax; this
0x41C682: mov     [esp+20h+var_4], esi
0x41C686: mov     MagicEnchantHitSoundMysticism, eax
0x41C68B: call    TESForm_SetFormID
0x41C690: mov     ecx, MagicEnchantHitSoundMysticism
0x41C696: mov     edx, [ecx]
0x41C698: mov     eax, [edx+0D8h]
0x41C69E: push    offset aMagicenchant_8
0x41C6A3: call    eax
0x41C6A5: mov     ecx, MagicEnchantHitSoundMysticism
0x41C6AB: mov     edx, [ecx]
0x41C6AD: mov     eax, [edx+90h]
0x41C6B3: push    0
0x41C6B5: call    eax
0x41C6B7: mov     ecx, MagicEnchantHitSoundMysticism
0x41C6BD: push    ecx
0x41C6BE: mov     ecx, TESDataHandler
0x41C6C4: add     ecx, 6Ch ; 'l'
0x41C6C7: call    BSSimpleList_PushFront
0x41C6CC: mov     ecx, TESDataHandler
0x41C6D2: push    0; int
0x41C6D4: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x41C6D9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C6DE: push    0; int
0x41C6E0: push    143h
0x41C6E5: call    TESDataHandler_LookupFormByID
0x41C6EA: push    eax; void *
0x41C6EB: call    OblivionDynamicCast
0x41C6F0: add     esp, 14h
0x41C6F3: test    eax, eax
0x41C6F5: mov     MagicEnchantHitSoundRestoration, eax
0x41C6FA: jnz     short loc_41C774
0x41C6FC: push    44h ; 'D'; Size
0x41C6FE: call    FormHeapAlloc
0x41C703: add     esp, 4
0x41C706: mov     [esp+18h+var_10], eax
0x41C70A: test    eax, eax
0x41C70C: mov     [esp+18h+var_4], 11h
0x41C714: jz      short loc_41C71F
0x41C716: mov     ecx, eax; this
0x41C718: call    ??0TESSound@@QAE@XZ
0x41C71D: jmp     short loc_41C721
0x41C71F: xor     eax, eax
0x41C721: push    1; a3
0x41C723: push    143h; a2
0x41C728: mov     ecx, eax; this
0x41C72A: mov     [esp+20h+var_4], esi
0x41C72E: mov     MagicEnchantHitSoundRestoration, eax
0x41C733: call    TESForm_SetFormID
0x41C738: mov     ecx, MagicEnchantHitSoundRestoration
0x41C73E: mov     edx, [ecx]
0x41C740: mov     eax, [edx+0D8h]
0x41C746: push    offset aMagicenchant_9
0x41C74B: call    eax
0x41C74D: mov     ecx, MagicEnchantHitSoundRestoration
0x41C753: mov     edx, [ecx]
0x41C755: mov     eax, [edx+90h]
0x41C75B: push    0
0x41C75D: call    eax
0x41C75F: mov     ecx, MagicEnchantHitSoundRestoration
0x41C765: push    ecx
0x41C766: mov     ecx, TESDataHandler
0x41C76C: add     ecx, 6Ch ; 'l'
0x41C76F: call    BSSimpleList_PushFront
0x41C774: mov     ecx, TESDataHandler
0x41C77A: push    0; int
0x41C77C: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x41C781: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C786: push    0; int
0x41C788: push    136h
0x41C78D: call    TESDataHandler_LookupFormByID
0x41C792: push    eax; void *
0x41C793: call    OblivionDynamicCast
0x41C798: add     esp, 14h
0x41C79B: test    eax, eax
0x41C79D: mov     TESDataHandler_g_DefaultPlayerSpell, eax
0x41C7A2: jnz     short loc_41C7FC
0x41C7A4: call    SpellItem_MakeDefaultPlayerSpell
0x41C7A9: test    eax, eax
0x41C7AB: mov     TESDataHandler_g_DefaultPlayerSpell, eax
0x41C7B0: jz      short loc_41C7FC
0x41C7B2: push    1; a3
0x41C7B4: push    136h; a2
0x41C7B9: mov     ecx, eax; this
0x41C7BB: call    TESForm_SetFormID
0x41C7C0: mov     ecx, TESDataHandler_g_DefaultPlayerSpell
0x41C7C6: mov     edx, [ecx]
0x41C7C8: mov     eax, [edx+0D8h]
0x41C7CE: push    offset aDefaultplayers
0x41C7D3: call    eax
0x41C7D5: mov     ecx, TESDataHandler_g_DefaultPlayerSpell
0x41C7DB: mov     edx, [ecx]
0x41C7DD: mov     eax, [edx+90h]
0x41C7E3: push    0
0x41C7E5: call    eax
0x41C7E7: mov     ecx, TESDataHandler_g_DefaultPlayerSpell
0x41C7ED: push    ecx
0x41C7EE: mov     ecx, TESDataHandler
0x41C7F4: add     ecx, 2Ch ; ','
0x41C7F7: call    BSSimpleList_PushFront
0x41C7FC: mov     ecx, TESDataHandler
0x41C802: push    0; int
0x41C804: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x41C809: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C80E: push    0; int
0x41C810: push    137h
0x41C815: call    TESDataHandler_LookupFormByID
0x41C81A: push    eax; void *
0x41C81B: call    OblivionDynamicCast
0x41C820: add     esp, 14h
0x41C823: test    eax, eax
0x41C825: mov     TESDataHandler_g_MarksmanParalyzeSpell, eax
0x41C82A: jnz     short loc_41C884
0x41C82C: call    SpellItem_MakeDefaultMarksmanSpell
0x41C831: test    eax, eax
0x41C833: mov     TESDataHandler_g_MarksmanParalyzeSpell, eax
0x41C838: jz      short loc_41C884
0x41C83A: push    1; a3
0x41C83C: push    137h; a2
0x41C841: mov     ecx, eax; this
0x41C843: call    TESForm_SetFormID
0x41C848: mov     ecx, TESDataHandler_g_MarksmanParalyzeSpell
0x41C84E: mov     edx, [ecx]
0x41C850: mov     eax, [edx+0D8h]
0x41C856: push    offset aDefaultmarksma
0x41C85B: call    eax
0x41C85D: mov     ecx, TESDataHandler_g_MarksmanParalyzeSpell
0x41C863: mov     edx, [ecx]
0x41C865: mov     eax, [edx+90h]
0x41C86B: push    0
0x41C86D: call    eax
0x41C86F: mov     ecx, TESDataHandler_g_MarksmanParalyzeSpell
0x41C875: push    ecx
0x41C876: mov     ecx, TESDataHandler
0x41C87C: add     ecx, 2Ch ; ','
0x41C87F: call    BSSimpleList_PushFront
0x41C884: mov     ecx, TESDataHandler
0x41C88A: push    0; int
0x41C88C: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x41C891: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C896: push    0; int
0x41C898: push    144h
0x41C89D: call    TESDataHandler_LookupFormByID
0x41C8A2: push    eax; void *
0x41C8A3: call    OblivionDynamicCast
0x41C8A8: add     esp, 14h
0x41C8AB: test    eax, eax
0x41C8AD: mov     effectReflectShader, eax
0x41C8B2: jnz     loc_41C93A
0x41C8B8: push    110h; Size
0x41C8BD: call    FormHeapAlloc
0x41C8C2: add     esp, 4
0x41C8C5: mov     [esp+18h+var_10], eax
0x41C8C9: test    eax, eax
0x41C8CB: mov     [esp+18h+var_4], 12h
0x41C8D3: jz      short loc_41C8DE
0x41C8D5: mov     ecx, eax; this
0x41C8D7: call    ??0TESEffectShader@@QAE@XZ
0x41C8DC: jmp     short loc_41C8E0
0x41C8DE: xor     eax, eax
0x41C8E0: test    eax, eax
0x41C8E2: mov     [esp+18h+var_4], esi
0x41C8E6: mov     effectReflectShader, eax
0x41C8EB: jz      short loc_41C93A
0x41C8ED: push    1; a3
0x41C8EF: push    144h; a2
0x41C8F4: mov     ecx, eax; this
0x41C8F6: call    TESForm_SetFormID
0x41C8FB: mov     ecx, effectReflectShader
0x41C901: mov     edx, [ecx]
0x41C903: mov     eax, [edx+0D8h]
0x41C909: push    offset aEffectabsorb
0x41C90E: call    eax
0x41C910: mov     ecx, effectReflectShader
0x41C916: mov     edx, [ecx]
0x41C918: mov     eax, [edx+90h]
0x41C91E: push    0
0x41C920: call    eax
0x41C922: mov     ecx, effectReflectShader
0x41C928: push    ecx
0x41C929: mov     ecx, TESDataHandler
0x41C92F: add     ecx, 0ACh ; '¬'
0x41C935: call    BSSimpleList_PushFront
0x41C93A: mov     ecx, TESDataHandler
0x41C940: push    0; int
0x41C942: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x41C947: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41C94C: push    0; int
0x41C94E: push    145h
0x41C953: call    TESDataHandler_LookupFormByID
0x41C958: push    eax; void *
0x41C959: call    OblivionDynamicCast
0x41C95E: add     esp, 14h
0x41C961: test    eax, eax
0x41C963: mov     effectAbsorbShader, eax
0x41C968: jnz     loc_41C9F0
0x41C96E: push    110h; Size
0x41C973: call    FormHeapAlloc
0x41C978: add     esp, 4
0x41C97B: mov     [esp+18h+var_10], eax
0x41C97F: test    eax, eax
0x41C981: mov     [esp+18h+var_4], 13h
0x41C989: jz      short loc_41C994
0x41C98B: mov     ecx, eax; this
0x41C98D: call    ??0TESEffectShader@@QAE@XZ
0x41C992: jmp     short loc_41C996
0x41C994: xor     eax, eax
0x41C996: test    eax, eax
0x41C998: mov     [esp+18h+var_4], esi
0x41C99C: mov     effectAbsorbShader, eax
0x41C9A1: jz      short loc_41C9F0
0x41C9A3: push    1; a3
0x41C9A5: push    145h; a2
0x41C9AA: mov     ecx, eax; this
0x41C9AC: call    TESForm_SetFormID
0x41C9B1: mov     ecx, effectAbsorbShader
0x41C9B7: mov     edx, [ecx]
0x41C9B9: mov     eax, [edx+0D8h]
0x41C9BF: push    offset aEffectreflect
0x41C9C4: call    eax
0x41C9C6: mov     ecx, effectAbsorbShader
0x41C9CC: mov     edx, [ecx]
0x41C9CE: mov     eax, [edx+90h]
0x41C9D4: push    0
0x41C9D6: call    eax
0x41C9D8: mov     ecx, effectAbsorbShader
0x41C9DE: push    ecx
0x41C9DF: mov     ecx, TESDataHandler
0x41C9E5: add     ecx, 0ACh ; '¬'
0x41C9EB: call    BSSimpleList_PushFront
0x41C9F0: mov     ecx, TESDataHandler
0x41C9F6: push    0; int
0x41C9F8: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x41C9FD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41CA02: push    0; int
0x41CA04: push    146h
0x41CA09: call    TESDataHandler_LookupFormByID
0x41CA0E: push    eax; void *
0x41CA0F: call    OblivionDynamicCast
0x41CA14: add     esp, 14h
0x41CA17: test    eax, eax
0x41CA19: mov     LifeDetectedShader, eax
0x41CA1E: jnz     loc_41CAA6
0x41CA24: push    110h; Size
0x41CA29: call    FormHeapAlloc
0x41CA2E: add     esp, 4
0x41CA31: mov     [esp+18h+var_10], eax
0x41CA35: test    eax, eax
0x41CA37: mov     [esp+18h+var_4], 14h
0x41CA3F: jz      short loc_41CA4A
0x41CA41: mov     ecx, eax; this
0x41CA43: call    ??0TESEffectShader@@QAE@XZ
0x41CA48: jmp     short loc_41CA4C
0x41CA4A: xor     eax, eax
0x41CA4C: test    eax, eax
0x41CA4E: mov     [esp+18h+var_4], esi
0x41CA52: mov     LifeDetectedShader, eax
0x41CA57: jz      short loc_41CAA6
0x41CA59: push    1; a3
0x41CA5B: push    146h; a2
0x41CA60: mov     ecx, eax; this
0x41CA62: call    TESForm_SetFormID
0x41CA67: mov     ecx, LifeDetectedShader
0x41CA6D: mov     edx, [ecx]
0x41CA6F: mov     eax, [edx+0D8h]
0x41CA75: push    offset aLifedetected
0x41CA7A: call    eax
0x41CA7C: mov     ecx, LifeDetectedShader
0x41CA82: mov     edx, [ecx]
0x41CA84: mov     eax, [edx+90h]
0x41CA8A: push    0
0x41CA8C: call    eax
0x41CA8E: mov     ecx, LifeDetectedShader
0x41CA94: push    ecx
0x41CA95: mov     ecx, TESDataHandler
0x41CA9B: add     ecx, 0ACh ; '¬'
0x41CAA1: call    BSSimpleList_PushFront
0x41CAA6: mov     ecx, dword ptr [esp+18h+var_C]
0x41CAAA: mov     large fs:0, ecx
0x41CAB1: pop     ecx
0x41CAB2: pop     esi
0x41CAB3: add     esp, 10h
0x41CAB6: retn
