0x49F950: sub     esp, 44h
0x49F953: push    ebx
0x49F954: push    ebp
0x49F955: mov     ebp, [esp+4Ch+arg_0]
0x49F959: xor     ebx, ebx
0x49F95B: xor     al, al
0x49F95D: cmp     ebp, ebx
0x49F95F: jz      loc_49FD13
0x49F965: cmp     dword ptr [ebp+44h], 1
0x49F969: jnz     loc_49FD13
0x49F96F: fld     dword ptr [ebp+4Ch]
0x49F972: fstp    [esp+4Ch+var_38]
0x49F976: fld     dword ptr [ebp+3Ch]
0x49F979: fstp    [esp+4Ch+var_34]
0x49F97D: fld     dword ptr ds:0A7DEB4h
0x49F983: fchs
0x49F985: fstp    [esp+4Ch+var_30]
0x49F989: fld     [esp+4Ch+var_38]
0x49F98D: fld     st
0x49F98F: fld     [esp+4Ch+var_30]
0x49F993: fld     st
0x49F995: fucomp  st(2)
0x49F997: fnstsw  ax
0x49F999: fstp    st(1)
0x49F99B: test    ah, 44h
0x49F99E: jnp     loc_49FCD6
0x49F9A4: fld     [esp+4Ch+var_34]
0x49F9A8: fld     st
0x49F9AA: fucomp  st(2)
0x49F9AC: fnstsw  ax
0x49F9AE: fstp    st(1)
0x49F9B0: test    ah, 44h
0x49F9B3: jnp     loc_49FCDA
0x49F9B9: fld     st(1)
0x49F9BB: fld     st(1)
0x49F9BD: fucompp
0x49F9BF: fnstsw  ax
0x49F9C1: test    ah, 44h
0x49F9C4: jnp     loc_49FCDA
0x49F9CA: fcom    st(1)
0x49F9CC: mov     [esp+4Ch+var_41], bl
0x49F9D0: fnstsw  ax
0x49F9D2: test    ah, 5
0x49F9D5: jp      short loc_49F9DC
0x49F9D7: mov     [esp+4Ch+var_41], 1
0x49F9DC: mov     eax, [ebp+20h]
0x49F9DF: cmp     eax, ebx
0x49F9E1: mov     [esp+4Ch+var_3C], ebx
0x49F9E5: mov     [esp+4Ch+var_30], ebx
0x49F9E9: jz      short loc_49F9F9
0x49F9EB: mov     ecx, [eax+0Ch]
0x49F9EE: mov     edx, [eax+10h]
0x49F9F1: mov     [esp+4Ch+var_3C], ecx
0x49F9F5: mov     [esp+4Ch+var_30], edx
0x49F9F9: cmp     [esp+4Ch+var_3C], ebx
0x49F9FD: mov     [esp+4Ch+var_40], ebx
0x49FA01: jbe     loc_49FCDA
0x49FA07: push    esi
0x49FA08: push    edi
0x49FA09: jmp     short loc_49FA18
0x49FA0B: jmp     short loc_49FA10
0x49FA0D: align 10h
0x49FA10: fld     [esp+54h+var_38]
0x49FA14: fld     [esp+54h+var_34]
0x49FA18: mov     eax, [esp+54h+var_30]
0x49FA1C: mov     esi, [eax+ebx*8+4]
0x49FA20: test    esi, esi
0x49FA22: jz      loc_49FCBD
0x49FA28: cmp     [esp+54h+var_41], 0
0x49FA2D: fld     dword ptr [eax+ebx*8]
0x49FA30: fstp    [esp+54h+var_2C]
0x49FA34: fld     [esp+54h+var_2C]
0x49FA38: jz      short loc_49FA4C
0x49FA3A: fcom    st(2)
0x49FA3C: fnstsw  ax
0x49FA3E: test    ah, 41h
0x49FA41: jz      short loc_49FA6A
0x49FA43: fcom    st(1)
0x49FA45: fnstsw  ax
0x49FA47: test    ah, 41h
0x49FA4A: jnp     short loc_49FA6A
0x49FA4C: fcom    st(2)
0x49FA4E: fnstsw  ax
0x49FA50: fstp    st(2)
0x49FA52: test    ah, 1
0x49FA55: jnz     loc_49FCBD
0x49FA5B: fcompp
0x49FA5D: fnstsw  ax
0x49FA5F: test    ah, 41h
0x49FA62: jnz     loc_49FCC1
0x49FA68: jmp     short loc_49FA70
0x49FA6A: fstp    st
0x49FA6C: fstp    st(1)
0x49FA6E: fstp    st
0x49FA70: push    7; MaxCount
0x49FA72: push    esi; Str2
0x49FA73: push    offset Str1; "Sound: "
0x49FA78: call    __strnicmp
0x49FA7D: add     esp, 0Ch
0x49FA80: test    eax, eax
0x49FA82: jz      loc_49FB0E
0x49FA88: push    11h; MaxCount
0x49FA8A: push    esi; Str2
0x49FA8B: push    offset aEnumStopsounds; "Enum: StopSounds "
0x49FA90: call    __strnicmp
0x49FA95: add     esp, 0Ch
0x49FA98: test    eax, eax
0x49FA9A: jnz     short loc_49FAE1
0x49FA9C: add     esi, 11h
0x49FA9F: push    esi; String
0x49FAA0: call    _atof
0x49FAA5: fstp    [esp+58h+var_40]
0x49FAA9: fld1
0x49FAAB: add     esp, 4
0x49FAAE: fcom    [esp+54h+var_40]
0x49FAB2: fnstsw  ax
0x49FAB4: test    ah, 41h
0x49FAB7: jnz     short loc_49FABF
0x49FAB9: fstp    [esp+54h+var_40]
0x49FABD: jmp     short loc_49FAC1
0x49FABF: fstp    st
0x49FAC1: fld     [esp+54h+var_40]
0x49FAC5: mov     eax, [esp+54h+arg_4]
0x49FAC9: push    ecx
0x49FACA: mov     ecx, ds:0B33398h
0x49FAD0: fstp    [esp+58h+var_58]; float
0x49FAD3: mov     ecx, [ecx+24h]
0x49FAD6: push    eax; int
0x49FAD7: call    sub_6AC420
0x49FADC: jmp     loc_49FCC1
0x49FAE1: push    0Fh; MaxCount
0x49FAE3: push    esi; Str2
0x49FAE4: push    offset aEnumHitshader; "Enum: HitShader"
0x49FAE9: call    __strnicmp
0x49FAEE: add     esp, 0Ch
0x49FAF1: test    eax, eax
0x49FAF3: jnz     loc_49FCC1
0x49FAF9: mov     edx, [esp+54h+arg_4]
0x49FAFD: mov     ecx, ds:0B333C4h
0x49FB03: push    edx
0x49FB04: call    sub_65DC50
0x49FB09: jmp     loc_49FCC1
0x49FB0E: push    0Dh; Val
0x49FB10: push    esi; Str
0x49FB11: call    _strchr
0x49FB16: mov     edi, eax
0x49FB18: add     esp, 8
0x49FB1B: test    edi, edi
0x49FB1D: jz      short loc_49FB22
0x49FB1F: mov     byte ptr [edi], 0
0x49FB22: mov     ecx, ds:0B33A98h
0x49FB28: add     esi, 7
0x49FB2B: push    esi
0x49FB2C: call    sub_447490
0x49FB31: test    edi, edi
0x49FB33: jz      short loc_49FB38
0x49FB35: mov     byte ptr [edi], 0Dh
0x49FB38: test    eax, eax
0x49FB3A: jz      loc_49FCC1
0x49FB40: mov     ecx, ds:0B33398h
0x49FB46: mov     ebp, [ecx+24h]
0x49FB49: test    ebp, ebp
0x49FB4B: jz      loc_49FCB7
0x49FB51: mov     ebx, [eax+3Ch]
0x49FB54: mov     edx, [eax+38h]
0x49FB57: mov     ecx, [eax+40h]
0x49FB5A: shr     ebx, 4
0x49FB5D: xor     edi, edi
0x49FB5F: and     bl, 1
0x49FB62: cmp     [esp+54h+arg_4], edi
0x49FB66: mov     [esp+54h+var_C], edx
0x49FB6A: mov     [esp+54h+var_4], ecx
0x49FB6E: mov     byte ptr [esp+54h+var_28], bl
0x49FB72: push    1
0x49FB74: jz      short loc_49FBDC
0x49FB76: mov     ecx, [eax+3Ch]
0x49FB79: mov     [esp+58h+var_C], edx
0x49FB7D: mov     edx, [eax+40h]
0x49FB80: mov     eax, [eax+0Ch]
0x49FB83: test    cl, 40h
0x49FB86: mov     [esp+58h+var_4], edx
0x49FB8A: mov     ecx, ebp
0x49FB8C: jz      short loc_49FB95
0x49FB8E: push    101h
0x49FB93: jmp     short loc_49FBE6
0x49FB95: push    102h
0x49FB9A: push    eax
0x49FB9B: call    OSGLobals_PlaySound
0x49FBA0: mov     ecx, [esp+54h+arg_4]
0x49FBA4: mov     esi, eax
0x49FBA6: mov     eax, [ecx]
0x49FBA8: mov     edx, [eax+154h]
0x49FBAE: call    edx
0x49FBB0: test    eax, eax
0x49FBB2: jz      short loc_49FBEE
0x49FBB4: mov     ecx, [esp+54h+arg_4]
0x49FBB8: mov     eax, [ecx]
0x49FBBA: mov     edx, [eax+154h]
0x49FBC0: call    edx
0x49FBC2: test    bl, bl
0x49FBC4: jz      short loc_49FBCA
0x49FBC6: mov     edi, eax
0x49FBC8: jmp     short loc_49FBEE
0x49FBCA: mov     edx, [eax]
0x49FBCC: mov     ecx, eax
0x49FBCE: mov     eax, [edx+58h]
0x49FBD1: push    offset aAttachsound; "AttachSound"
0x49FBD6: call    eax
0x49FBD8: mov     edi, eax
0x49FBDA: jmp     short loc_49FBEE
0x49FBDC: mov     eax, [eax+0Ch]
0x49FBDF: push    121h
0x49FBE4: mov     ecx, ebp
0x49FBE6: push    eax
0x49FBE7: call    OSGLobals_PlaySound
0x49FBEC: mov     esi, eax
0x49FBEE: test    esi, esi
0x49FBF0: jz      loc_49FCB3
0x49FBF6: test    edi, edi
0x49FBF8: jz      short loc_49FC46
0x49FBFA: mov     eax, [edi+90h]
0x49FC00: mov     edx, [edi+8Ch]
0x49FC06: mov     ecx, [edi+88h]
0x49FC0C: sub     esp, 0Ch
0x49FC0F: mov     [esp+60h+var_1C], eax
0x49FC13: fld     [esp+60h+var_1C]
0x49FC17: fstp    [esp+60h+var_58]; float
0x49FC1B: mov     [esp+60h+var_20], edx
0x49FC1F: fld     [esp+60h+var_20]
0x49FC23: mov     [esp+60h+var_24], ecx
0x49FC27: fstp    [esp+60h+var_5C]; float
0x49FC2B: mov     ecx, esi
0x49FC2D: fld     [esp+60h+var_24]
0x49FC31: fstp    [esp+60h+var_60]; float
0x49FC34: call    sub_6B7360
0x49FC39: mov     ecx, [esi]
0x49FC3B: push    edi
0x49FC3C: push    ecx
0x49FC3D: mov     ecx, ebp
0x49FC3F: call    sub_6AA980
0x49FC44: jmp     short loc_49FC97
0x49FC46: mov     ecx, [esp+54h+arg_4]
0x49FC4A: test    ecx, ecx
0x49FC4C: jz      short loc_49FC97
0x49FC4E: mov     edx, [ecx]
0x49FC50: mov     eax, [edx+154h]
0x49FC56: call    eax
0x49FC58: mov     ecx, [eax+88h]
0x49FC5E: mov     edx, [eax+8Ch]
0x49FC64: mov     eax, [eax+90h]
0x49FC6A: sub     esp, 0Ch
0x49FC6D: mov     [esp+60h+var_10], eax
0x49FC71: fld     [esp+60h+var_10]
0x49FC75: fstp    [esp+60h+var_58]; float
0x49FC79: mov     [esp+60h+var_14], edx
0x49FC7D: fld     [esp+60h+var_14]
0x49FC81: mov     [esp+60h+var_18], ecx
0x49FC85: fstp    [esp+60h+var_5C]; float
0x49FC89: mov     ecx, esi
0x49FC8B: fld     [esp+60h+var_18]
0x49FC8F: fstp    [esp+60h+var_60]; float
0x49FC92: call    sub_6B7360
0x49FC97: mov     ecx, [esp+54h+var_28]
0x49FC9B: push    ecx
0x49FC9C: mov     ecx, esi
0x49FC9E: call    sub_6B7190
0x49FCA3: mov     ecx, esi; this
0x49FCA5: call    sub_6B73E0
0x49FCAA: push    esi
0x49FCAB: call    FormHeapFree
0x49FCB0: add     esp, 4
0x49FCB3: mov     ebx, [esp+54h+var_40]
0x49FCB7: mov     ebp, [esp+54h+arg_0]
0x49FCBB: jmp     short loc_49FCC1
0x49FCBD: fstp    st(1)
0x49FCBF: fstp    st
0x49FCC1: add     ebx, 1
0x49FCC4: cmp     ebx, [esp+54h+var_3C]
0x49FCC8: mov     [esp+54h+var_40], ebx
0x49FCCC: jb      loc_49FA10
0x49FCD2: pop     edi
0x49FCD3: pop     esi
0x49FCD4: jmp     short loc_49FCDE
0x49FCD6: fstp    st
0x49FCD8: jmp     short loc_49FCDC
0x49FCDA: fstp    st(1)
0x49FCDC: fstp    st
0x49FCDE: cmp     dword ptr [ebp+24h], 0
0x49FCE2: jz      short loc_49FD11
0x49FCE4: fld     dword ptr [ebp+48h]
0x49FCE7: mov     cl, 1
0x49FCE9: fld     dword ptr ds:0A7DEB4h
0x49FCEF: fchs
0x49FCF1: fucompp
0x49FCF3: fnstsw  ax
0x49FCF5: test    ah, 44h
0x49FCF8: jnp     short loc_49FD11
0x49FCFA: fld     dword ptr [ebp+3Ch]
0x49FCFD: fld     dword ptr [ebp+30h]
0x49FD00: fcompp
0x49FD02: fnstsw  ax
0x49FD04: test    ah, 41h
0x49FD07: jz      short loc_49FD11
0x49FD09: pop     ebp
0x49FD0A: mov     al, cl
0x49FD0C: pop     ebx
0x49FD0D: add     esp, 44h
0x49FD10: retn
0x49FD11: xor     al, al
0x49FD13: pop     ebp
0x49FD14: pop     ebx
0x49FD15: add     esp, 44h
0x49FD18: retn
