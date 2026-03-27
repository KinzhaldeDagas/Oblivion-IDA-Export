0x69CC80: sub     esp, 10h
0x69CC83: push    ebx
0x69CC84: push    ebp
0x69CC85: push    esi
0x69CC86: push    edi
0x69CC87: lea     eax, [esp+20h+var_10]
0x69CC8B: push    eax
0x69CC8C: mov     esi, ecx
0x69CC8E: call    MobileObject_GetCharProxy
0x69CC93: mov     ecx, eax
0x69CC95: call    sub_57E270
0x69CC9A: mov     edi, [esp+20h+var_10]
0x69CC9E: mov     ecx, esi; this
0x69CCA0: or      edi, 4000h
0x69CCA6: call    MobileObject_GetCharProxy
0x69CCAB: mov     ecx, [eax+364h]
0x69CCB1: test    ecx, ecx
0x69CCB3: jz      short loc_69CCCE
0x69CCB5: mov     eax, [ecx+8]
0x69CCB8: test    eax, eax
0x69CCBA: jz      short loc_69CCC4
0x69CCBC: add     eax, 14h
0x69CCBF: jz      short loc_69CCC4
0x69CCC1: mov     [eax+1Ch], edi
0x69CCC4: mov     edx, [ecx]
0x69CCC6: mov     eax, [edx+80h]
0x69CCCC: call    eax
0x69CCCE: fld     dword ptr [esi+80h]
0x69CCD4: mov     bl, [esp+20h+arg_14]
0x69CCD8: test    bl, bl
0x69CCDA: fsub    dword ptr [esi+7Ch]
0x69CCDD: mov     dword ptr [esi+88h], 1
0x69CCE7: fdiv    dword ptr [esi+80h]
0x69CCED: fstp    [esp+20h+var_10]
0x69CCF1: jnz     short loc_69CD4F
0x69CCF3: fldz
0x69CCF5: fcomp   [esp+20h+var_10]
0x69CCF9: fnstsw  ax
0x69CCFB: test    ah, 5
0x69CCFE: jp      short loc_69CD4F
0x69CD00: mov     edx, [esi]
0x69CD02: mov     eax, [edx+174h]
0x69CD08: mov     edi, [esi+6Ch]
0x69CD0B: mov     ebp, [esi+68h]
0x69CD0E: mov     ecx, esi
0x69CD10: call    eax
0x69CD12: fld1
0x69CD14: mov     ecx, [esp+20h+arg_10]
0x69CD18: mov     edx, [eax]
0x69CD1A: sub     esp, 8
0x69CD1D: fstp    [esp+28h+var_24]; float
0x69CD21: fld     [esp+28h+var_10]
0x69CD25: fstp    [esp+28h+var_28]; float
0x69CD28: push    0; int
0x69CD2A: push    ecx; int
0x69CD2B: push    esi; int
0x69CD2C: sub     esp, 0Ch
0x69CD2F: mov     ecx, esp
0x69CD31: mov     [ecx], edx
0x69CD33: mov     edx, [eax+4]
0x69CD36: mov     eax, [eax+8]
0x69CD39: mov     [ecx+4], edx
0x69CD3C: mov     [ecx+8], eax
0x69CD3F: mov     ecx, esi; this
0x69CD41: call    TESObjectREFR_GetParentCell
0x69CD46: push    eax; int
0x69CD47: push    edi; int
0x69CD48: mov     ecx, ebp
0x69CD4A: call    MagicCaster_TargetEffectHit??
0x69CD4F: mov     ecx, ds:0B33398h
0x69CD55: mov     ecx, [ecx+24h]
0x69CD58: test    ecx, ecx
0x69CD5A: jz      loc_69CDE1
0x69CD60: mov     edx, [esi+74h]
0x69CD63: mov     eax, [edx+8Ch]
0x69CD69: test    eax, eax
0x69CD6B: jz      short loc_69CDE1
0x69CD6D: test    bl, bl
0x69CD6F: jnz     short loc_69CDE1
0x69CD71: mov     eax, [eax+0Ch]
0x69CD74: push    1
0x69CD76: push    102h
0x69CD7B: push    eax
0x69CD7C: call    OSGLobals_PlaySound
0x69CD81: mov     edi, eax
0x69CD83: test    edi, edi
0x69CD85: jz      short loc_69CDE1
0x69CD87: mov     eax, [esi]
0x69CD89: mov     edx, [eax+174h]
0x69CD8F: mov     ecx, esi
0x69CD91: call    edx
0x69CD93: mov     ecx, [eax]
0x69CD95: mov     edx, [eax+4]
0x69CD98: mov     eax, [eax+8]
0x69CD9B: sub     esp, 0Ch
0x69CD9E: mov     [esp+2Ch+var_4], eax
0x69CDA2: fld     [esp+2Ch+var_4]
0x69CDA6: fstp    [esp+2Ch+var_24]; float
0x69CDAA: mov     [esp+2Ch+var_8], edx
0x69CDAE: fld     [esp+2Ch+var_8]
0x69CDB2: mov     [esp+2Ch+var_C], ecx
0x69CDB6: fstp    [esp+2Ch+var_28]; float
0x69CDBA: mov     ecx, edi
0x69CDBC: fld     [esp+2Ch+var_C]
0x69CDC0: fstp    [esp+2Ch+var_2C]; float
0x69CDC3: call    sub_6B7360
0x69CDC8: push    0
0x69CDCA: mov     ecx, edi
0x69CDCC: call    sub_6B71C0
0x69CDD1: mov     ecx, edi; this
0x69CDD3: call    sub_6B73E0
0x69CDD8: push    edi
0x69CDD9: call    FormHeapFree
0x69CDDE: add     esp, 4
0x69CDE1: pop     edi
0x69CDE2: pop     esi
0x69CDE3: pop     ebp
0x69CDE4: pop     ebx
0x69CDE5: add     esp, 10h
0x69CDE8: retn    18h
