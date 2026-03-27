0x5687D0: sub     esp, 164h
0x5687D6: mov     eax, ds:0B30AACh
0x5687DB: xor     eax, esp
0x5687DD: mov     [esp+164h+var_4], eax
0x5687E4: push    esi
0x5687E5: mov     esi, [esp+168h+arg_0]
0x5687EC: test    esi, esi
0x5687EE: mov     [esp+168h+var_15C], ecx
0x5687F2: jz      loc_568B8C
0x5687F8: mov     ecx, esi
0x5687FA: call    sub_5EAE10
0x5687FF: test    eax, eax
0x568801: jz      loc_568B8C
0x568807: push    edi
0x568808: mov     ecx, esi
0x56880A: mov     [esp+16Ch+var_162], 0
0x56880F: call    sub_5EAE10
0x568814: mov     edi, eax
0x568816: mov     eax, [edi]
0x568818: mov     edx, [eax+174h]
0x56881E: mov     ecx, edi
0x568820: call    edx
0x568822: mov     ecx, [eax]
0x568824: mov     [esp+16Ch+var_158], ecx
0x568828: mov     edx, [eax+4]
0x56882B: mov     [esp+16Ch+var_154], edx
0x56882F: mov     eax, [eax+8]
0x568832: mov     ecx, edi; this
0x568834: mov     [esp+16Ch+var_150], eax
0x568838: call    GetTeleportExtraData
0x56883D: test    eax, eax
0x56883F: jz      short loc_56885C
0x568841: mov     ecx, edi
0x568843: call    sub_4D76F0
0x568848: mov     ecx, [eax]
0x56884A: mov     [esp+16Ch+var_158], ecx
0x56884E: mov     edx, [eax+4]
0x568851: mov     [esp+16Ch+var_154], edx
0x568855: mov     eax, [eax+8]
0x568858: mov     [esp+16Ch+var_150], eax
0x56885C: push    ebp
0x56885D: mov     ecx, edi; this
0x56885F: call    TESObjectREFR_GetWorldSpace
0x568864: mov     ecx, edi; this
0x568866: mov     [esp+170h+var_160], eax
0x56886A: call    TESObjectREFR_GetParentCell
0x56886F: mov     ebp, eax
0x568871: test    ebp, ebp
0x568873: jz      short loc_568882
0x568875: mov     ecx, ebp; this
0x568877: call    TESObjectCELL_IsInterior
0x56887C: test    al, al
0x56887E: jnz     short loc_568882
0x568880: xor     ebp, ebp
0x568882: push    ebx
0x568883: mov     ecx, esi; this
0x568885: call    TESObjectREFR_GetWorldSpace
0x56888A: mov     ecx, esi; this
0x56888C: mov     [esp+174h+var_140], eax
0x568890: call    TESObjectREFR_GetParentCell
0x568895: mov     ebx, eax
0x568897: test    ebx, ebx
0x568899: jz      short loc_5688AA
0x56889B: mov     ecx, ebx; this
0x56889D: call    TESObjectCELL_IsInterior
0x5688A2: test    al, al
0x5688A4: jnz     loc_568961
0x5688AA: test    ebp, ebp
0x5688AC: jnz     loc_568969
0x5688B2: mov     ecx, [esp+174h+var_160]
0x5688B6: cmp     [esp+174h+var_140], ecx
0x5688BA: jnz     loc_568969
0x5688C0: mov     ecx, [esp+174h+var_15C]
0x5688C4: push    2
0x5688C6: push    esi
0x5688C7: call    sub_5677B0
0x5688CC: call    Double_To_SInt32
0x5688D1: mov     edx, [esi]
0x5688D3: mov     ebp, eax
0x5688D5: mov     eax, [edx+174h]
0x5688DB: mov     ecx, esi
0x5688DD: mov     [esp+174h+var_160], ebp
0x5688E1: mov     [esp+174h+var_161], 0
0x5688E6: call    eax
0x5688E8: fld     [esp+170h+var_154]
0x5688EC: fsub    dword ptr [eax]
0x5688EE: mov     ecx, edi
0x5688F0: fstp    [esp+170h+var_148]
0x5688F4: fld     [esp+170h+var_150]
0x5688F8: fsub    dword ptr [eax+4]
0x5688FB: fstp    [esp+170h+var_144]
0x5688FF: fld     [esp+170h+var_14C]
0x568903: fsub    dword ptr [eax+8]
0x568906: fstp    [esp+170h+var_140]
0x56890A: call    sub_4D74B0
0x56890F: test    al, al
0x568911: jz      short loc_568986
0x568913: mov     ecx, [esi+58h]
0x568916: test    ecx, ecx
0x568918: jz      short loc_568986
0x56891A: mov     edx, [ecx]
0x56891C: mov     eax, [edx+380h]
0x568922: call    eax
0x568924: test    eax, eax
0x568926: jz      short loc_568986
0x568928: mov     ecx, [esi+58h]
0x56892B: mov     edx, [ecx]
0x56892D: mov     eax, [edx+8]
0x568930: call    eax
0x568932: test    eax, eax
0x568934: jnz     short loc_568957
0x568936: mov     ecx, [esi+58h]
0x568939: mov     edx, [ecx]
0x56893B: mov     eax, [edx+380h]
0x568941: call    eax
0x568943: mov     ecx, [eax]
0x568945: mov     [esp+170h+var_154], ecx
0x568949: mov     edx, [eax+4]
0x56894C: mov     [esp+170h+var_150], edx
0x568950: mov     eax, [eax+8]
0x568953: mov     [esp+170h+var_14C], eax
0x568957: mov     ebp, 0Ah
0x56895C: jmp     loc_568A34
0x568961: cmp     ebx, ebp
0x568963: jz      loc_5688C0
0x568969: xor     al, al
0x56896B: pop     ebx
0x56896C: pop     ebp
0x56896D: pop     edi
0x56896E: pop     esi
0x56896F: mov     ecx, [esp+164h+var_4]
0x568976: xor     ecx, esp
0x568978: call    @__security_check_cookie@4; __security_check_cookie(x)
0x56897D: add     esp, 164h
0x568983: retn    4
0x568986: mov     edx, [edi]
0x568988: mov     eax, [edx+190h]
0x56898E: mov     ecx, edi
0x568990: call    eax
0x568992: test    al, al
0x568994: mov     edx, [edi]
0x568996: mov     ecx, edi
0x568998: jz      short loc_568A0B
0x56899A: mov     eax, [edx+18Ch]
0x5689A0: call    eax
0x5689A2: cmp     eax, 9
0x5689A5: jnz     short loc_5689B1
0x5689A7: mov     ebp, 5Ah ; 'Z'
0x5689AC: jmp     loc_568A34
0x5689B1: mov     edx, [esi]
0x5689B3: mov     eax, [edx+18Ch]
0x5689B9: mov     ecx, esi
0x5689BB: call    eax
0x5689BD: cmp     eax, 4
0x5689C0: jnz     short loc_5689C9
0x5689C2: mov     ebp, 0C8h ; 'È'
0x5689C7: jmp     short loc_568A34
0x5689C9: fild    [esp+170h+var_15C]
0x5689CD: fcomp   dword ptr ds:0A2FAA8h
0x5689D3: fnstsw  ax
0x5689D5: test    ah, 41h
0x5689D8: jp      short loc_568A3D
0x5689DA: mov     edx, [edi]
0x5689DC: mov     eax, [edx+170h]
0x5689E2: mov     ecx, edi
0x5689E4: call    eax
0x5689E6: push    eax
0x5689E7: call    sub_46D5C0
0x5689EC: add     esp, 4
0x5689EF: call    Double_To_SInt32
0x5689F4: mov     [esp+170h+var_158], eax
0x5689F8: fild    [esp+170h+var_158]
0x5689FC: fadd    qword ptr ds:0A46E48h
0x568A02: call    Double_To_SInt32
0x568A07: mov     ebp, eax
0x568A09: jmp     short loc_568A39
0x568A0B: mov     eax, [edx+170h]
0x568A11: call    eax
0x568A13: cmp     eax, ds:0B35EB0h
0x568A19: jz      short loc_568A2F
0x568A1B: mov     edx, [edi]
0x568A1D: mov     eax, [edx+170h]
0x568A23: mov     ecx, edi
0x568A25: call    eax
0x568A27: cmp     eax, ds:0B35EACh
0x568A2D: jnz     short loc_568A3D
0x568A2F: mov     ebp, 14h
0x568A34: mov     byte ptr [esp+170h+var_160+2], 1
0x568A39: mov     [esp+170h+var_15C], ebp
0x568A3D: fld     [esp+170h+var_140]
0x568A41: fabs
0x568A43: fstp    [esp+170h+var_158]
0x568A47: fld     [esp+170h+var_158]
0x568A4B: fld     dword ptr ds:0B3A470h
0x568A51: fcompp
0x568A53: fnstsw  ax
0x568A55: test    ah, 41h
0x568A58: jnz     short loc_568A60
0x568A5A: fldz
0x568A5C: fstp    [esp+170h+var_140]
0x568A60: mov     edx, [esi]
0x568A62: mov     eax, [edx+334h]
0x568A68: push    1
0x568A6A: mov     ecx, esi
0x568A6C: xor     bl, bl
0x568A6E: call    eax
0x568A70: test    al, al
0x568A72: jz      short loc_568A99
0x568A74: mov     edx, [esi]
0x568A76: mov     eax, [edx+330h]
0x568A7C: mov     ecx, esi
0x568A7E: call    eax
0x568A80: test    eax, eax
0x568A82: jz      short loc_568A99
0x568A84: mov     edx, [esi]
0x568A86: mov     eax, [edx+330h]
0x568A8C: mov     ecx, esi
0x568A8E: call    eax
0x568A90: mov     ecx, eax
0x568A92: call    sub_6163A0
0x568A97: mov     bl, al
0x568A99: cmp     [esp+174h+var_162], 0
0x568A9E: fild    [esp+174h+var_160]
0x568AA2: lea     edx, [esp+174h+var_158]
0x568AA6: setz    cl
0x568AA9: push    ecx; char
0x568AAA: push    ecx
0x568AAB: fstp    [esp+17Ch+var_180+4]; float
0x568AAE: push    edx; int
0x568AAF: push    esi; int
0x568AB0: call    sub_684B30
0x568AB5: add     esp, 10h
0x568AB8: test    al, al
0x568ABA: jz      short loc_568AC4
0x568ABC: test    bl, bl
0x568ABE: jz      loc_568B48
0x568AC4: mov     ecx, edi
0x568AC6: call    sub_4D74B0
0x568ACB: test    al, al
0x568ACD: jz      short loc_568B4D
0x568ACF: mov     ecx, [esi+58h]
0x568AD2: test    ecx, ecx
0x568AD4: jz      short loc_568B4D
0x568AD6: mov     eax, [ecx]
0x568AD8: mov     edx, [eax+380h]
0x568ADE: call    edx
0x568AE0: test    eax, eax
0x568AE2: jz      short loc_568B4D
0x568AE4: mov     eax, [esi]
0x568AE6: mov     edx, [eax+174h]
0x568AEC: mov     ecx, esi
0x568AEE: call    edx
0x568AF0: fld     [esp+174h+var_158]
0x568AF4: fsub    dword ptr [eax]
0x568AF6: lea     ecx, [esp+174h+var_13C]
0x568AFA: fstp    [esp+174h+var_13C]
0x568AFE: fld     [esp+174h+var_154]
0x568B02: fsub    dword ptr [eax+4]
0x568B05: fstp    [esp+174h+var_138]
0x568B09: fld     [esp+174h+var_150]
0x568B0D: fsub    dword ptr [eax+8]
0x568B10: fstp    [esp+174h+var_134]
0x568B14: call    sub_404C90
0x568B19: fcomp   qword ptr ds:0A309F0h
0x568B1F: fnstsw  ax
0x568B21: test    ah, 5
0x568B24: jp      short loc_568B37
0x568B26: mov     eax, [esi]
0x568B28: mov     edx, [eax+18Ch]
0x568B2E: mov     ecx, esi
0x568B30: call    edx
0x568B32: cmp     eax, 4
0x568B35: jz      short loc_568B48
0x568B37: mov     eax, [esi]
0x568B39: mov     edx, [eax+18Ch]
0x568B3F: mov     ecx, esi
0x568B41: call    edx
0x568B43: cmp     eax, 9
0x568B46: jnz     short loc_568B4D
0x568B48: mov     [esp+174h+var_161], 1
0x568B4D: call    sub_579440
0x568B52: cmp     eax, esi
0x568B54: jnz     short loc_568B83
0x568B56: lea     ecx, [esp+174h+var_14C]
0x568B5A: call    sub_404C90
0x568B5F: sub     esp, 8
0x568B62: fstp    qword ptr [esp+17Ch+var_180+4]
0x568B65: push    ebp
0x568B66: lea     eax, [esp+180h+OutputString]
0x568B6A: push    offset aRadius_02fDist; "radius %.02f distance %.02f"
0x568B6F: push    eax
0x568B70: call    __sprintf
0x568B75: add     esp, 14h
0x568B78: lea     ecx, [esp+174h+OutputString]
0x568B7C: push    ecx; lpOutputString
0x568B7D: call    dword ptr ds:0A28144h
0x568B83: mov     al, [esp+174h+var_161]
0x568B87: jmp     loc_56896B
0x568B8C: mov     ecx, [esp+168h+var_4]
0x568B93: pop     esi
0x568B94: xor     ecx, esp
0x568B96: xor     al, al
0x568B98: call    @__security_check_cookie@4; __security_check_cookie(x)
0x568B9D: add     esp, 164h
0x568BA3: retn    4
