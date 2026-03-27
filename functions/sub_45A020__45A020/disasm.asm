0x45A020: mov     eax, [esp+arg_0]
0x45A024: test    eax, eax
0x45A026: jz      locret_45A130
0x45A02C: push    edi
0x45A02D: mov     edi, [esp+4+arg_4]
0x45A031: test    edi, edi
0x45A033: jz      loc_45A12F
0x45A039: push    esi
0x45A03A: push    0; int
0x45A03C: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x45A041: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45A046: push    0; int
0x45A048: push    eax; void *
0x45A049: call    OblivionDynamicCast
0x45A04E: mov     esi, eax
0x45A050: add     esp, 14h
0x45A053: test    esi, esi
0x45A055: jz      loc_45A125
0x45A05B: cmp     dword ptr [esi+58h], 0
0x45A05F: jz      loc_45A125
0x45A065: mov     eax, [esi]
0x45A067: mov     edx, [eax+124h]
0x45A06D: push    504D4156h
0x45A072: mov     ecx, esi
0x45A074: call    edx
0x45A076: mov     ecx, eax
0x45A078: call    sub_6A1F30
0x45A07D: fstp    [esp+8+arg_0]
0x45A081: fldz
0x45A083: fcom    dword ptr [edi]
0x45A085: fnstsw  ax
0x45A087: test    ah, 44h
0x45A08A: jnp     loc_45A123
0x45A090: fcomp   [esp+8+arg_0]
0x45A094: fnstsw  ax
0x45A096: test    ah, 44h
0x45A099: jp      loc_45A125
0x45A09F: push    0; int
0x45A0A1: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x45A0A6: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x45A0AB: push    0; int
0x45A0AD: push    0; a2
0x45A0AF: mov     ecx, esi; this
0x45A0B1: call    Actor_GetActorBaseForm
0x45A0B6: push    eax; void *
0x45A0B7: call    OblivionDynamicCast
0x45A0BC: mov     edx, [eax]
0x45A0BE: add     esp, 14h
0x45A0C1: push    0
0x45A0C3: mov     ecx, eax
0x45A0C5: mov     eax, [edx+134h]
0x45A0CB: push    45h ; 'E'
0x45A0CD: call    eax
0x45A0CF: fldz
0x45A0D1: push    ecx
0x45A0D2: fstp    [esp+0Ch+var_C]; float
0x45A0D5: mov     ecx, esi
0x45A0D7: call    sub_60E2E0
0x45A0DC: mov     ecx, [esi+58h]
0x45A0DF: mov     edx, [ecx]
0x45A0E1: mov     eax, [edx+5Ch]
0x45A0E4: call    eax
0x45A0E6: mov     ecx, [esi+58h]
0x45A0E9: test    ecx, ecx
0x45A0EB: jz      short loc_45A125
0x45A0ED: mov     edx, [ecx]
0x45A0EF: mov     eax, [edx+31Ch]
0x45A0F5: push    1
0x45A0F7: call    eax
0x45A0F9: mov     byte ptr ds:0B33D80h, 1
0x45A100: mov     ecx, [esi+58h]
0x45A103: mov     edx, [ecx]
0x45A105: mov     eax, [edx+318h]
0x45A10B: push    esi
0x45A10C: call    eax
0x45A10E: push    edi
0x45A10F: mov     byte ptr ds:0B33D80h, 0
0x45A116: call    FormHeapFree
0x45A11B: add     esp, 4
0x45A11E: pop     esi
0x45A11F: pop     edi
0x45A120: retn    8
0x45A123: fstp    st
0x45A125: push    edi
0x45A126: call    FormHeapFree
0x45A12B: add     esp, 4
0x45A12E: pop     esi
0x45A12F: pop     edi
0x45A130: retn    8
