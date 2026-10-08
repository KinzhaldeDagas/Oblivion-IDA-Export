0x7947A0: push    0FFFFFFFFh; Oblivion CIndexedGeometry::ComputeExtents. Walks the locally stored xyz vertex stream and includes each point in the 0x30-byte stRegion bounds object.
0x7947A2: push    offset SEH_7947A0
0x7947A7: mov     eax, large fs:0
0x7947AD: push    eax
0x7947AE: sub     esp, 4Ch
0x7947B1: push    ebx
0x7947B2: push    ebp
0x7947B3: push    esi
0x7947B4: push    edi
0x7947B5: mov     eax, ds:0B30AACh
0x7947BA: xor     eax, esp
0x7947BC: push    eax
0x7947BD: lea     eax, [esp+6Ch+var_C]
0x7947C1: mov     large fs:0, eax
0x7947C7: mov     esi, ecx
0x7947C9: mov     [esp+6Ch+var_54], esi
0x7947CD: mov     eax, [esi+6Ch]
0x7947D0: test    eax, eax
0x7947D2: jnz     short loc_7947D8
0x7947D4: xor     ecx, ecx
0x7947D6: jmp     short loc_7947E0
0x7947D8: mov     ecx, [esi+70h]
0x7947DB: sub     ecx, eax
0x7947DD: sar     ecx, 2
0x7947E0: mov     eax, 0AAAAAAABh
0x7947E5: mul     ecx
0x7947E7: shr     edx, 1
0x7947E9: movzx   eax, dx
0x7947EC: movzx   eax, ax
0x7947EF: test    eax, eax
0x7947F1: jle     loc_79489B
0x7947F7: mov     ebp, [esp+6Ch+extents]
0x7947FB: xor     ebx, ebx
0x7947FD: mov     [esp+6Ch+var_58], eax
0x794801: jmp     short loc_794807
0x794803: mov     esi, [esp+6Ch+var_54]
0x794807: mov     eax, [esi+6Ch]
0x79480A: test    eax, eax
0x79480C: jz      short loc_794818
0x79480E: mov     ecx, [esi+70h]
0x794811: sub     ecx, eax
0x794813: sar     ecx, 2
0x794816: jnz     short loc_79481D
0x794818: call    __invalid_parameter_noinfo
0x79481D: mov     eax, [esi+6Ch]
0x794820: fld     dword ptr [eax+ebx]
0x794823: add     eax, ebx
0x794825: fstp    [esp+6Ch+extents]
0x794829: lea     edx, [esp+6Ch+point]
0x79482D: fld     dword ptr [eax+4]
0x794830: push    edx; point
0x794831: fstp    [esp+70h+var_50]
0x794835: mov     ecx, ebp; this
0x794837: fld     dword ptr [eax+8]
0x79483A: lea     eax, [esp+70h+outRegion]
0x79483E: fstp    [esp+70h+var_4C]
0x794842: push    eax; outRegion
0x794843: fld     [esp+74h+extents]
0x794847: fstp    [esp+74h+point.x]
0x79484B: fld     [esp+74h+var_50]
0x79484F: fstp    [esp+74h+point.y]
0x794853: fld     [esp+74h+var_4C]
0x794857: fstp    [esp+74h+point.z]
0x79485B: call    OB_stRegion_IncludePointCopy_010201A0; Oblivion stRegion point-union operator (source spelling operator^). Copies the 0x30-byte region, then clamps min.xyz downward and max.xyz upward to include one stVec3 point; unused stVec slots and size fields are preserved.
0x794860: mov     ecx, 0Ch
0x794865: mov     esi, eax
0x794867: mov     edi, ebp
0x794869: rep movsd
0x79486B: lea     ecx, [esp+6Ch+outRegion.max]; this
0x79486F: mov     [esp+6Ch+var_4], 0
0x794877: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x79487C: lea     ecx, [esp+6Ch+outRegion]; this
0x794880: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x794888: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x79488D: add     ebx, 0Ch
0x794890: sub     [esp+6Ch+var_58], 1
0x794895: jnz     loc_794803
0x79489B: mov     ecx, [esp+6Ch+var_C]
0x79489F: mov     large fs:0, ecx
0x7948A6: pop     ecx
0x7948A7: pop     edi
0x7948A8: pop     esi
0x7948A9: pop     ebp
0x7948AA: pop     ebx
0x7948AB: add     esp, 58h
0x7948AE: retn    4
0x9CBD30: lea     ecx, [ebp-3Ch]; this
0x9CBD33: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CBD38: mov     edx, [esp+arg_4]
0x9CBD3C: lea     eax, [edx-5Ch]
0x9CBD3F: mov     ecx, [edx-60h]
0x9CBD42: xor     ecx, eax
0x9CBD44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBD49: mov     eax, offset stru_AF4C74
0x9CBD4E: jmp     ___CxxFrameHandler3
