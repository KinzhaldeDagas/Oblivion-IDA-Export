0x4F05A0: sub     esp, 0Ch; Verified: retrieves the +0x60 coordinate bucket using the SubSpace reference's position-derived signed-X/unsigned-Y cell key (shift 12 after engine float-to-int conversion), returning its 8-byte list head. The writer populates every bucket touched by the scaled SubSpace radius.
0x4F05A3: xor     eax, eax
0x4F05A5: cmp     [ecx+60h], eax
0x4F05A8: mov     [esp+0Ch+var_8], eax
0x4F05AC: jz      short loc_4F05F7
0x4F05AE: mov     edx, [esp+0Ch+worldPosition]
0x4F05B2: fld     dword ptr [edx]
0x4F05B4: fstp    [esp+0Ch+var_C]
0x4F05B7: fld     [esp+0Ch+var_C]
0x4F05BA: fistp   [esp+0Ch+worldPosition]
0x4F05BE: fld     dword ptr [edx+4]
0x4F05C1: mov     eax, [esp+0Ch+worldPosition]
0x4F05C5: fstp    [esp+0Ch+var_4]
0x4F05C9: fld     [esp+0Ch+var_4]
0x4F05CD: fistp   [esp+0Ch+var_C]
0x4F05D0: mov     ecx, [ecx+60h]
0x4F05D3: lea     edx, [esp+0Ch+var_8]
0x4F05D7: push    edx
0x4F05D8: mov     edx, [esp+10h+var_C]
0x4F05DC: sar     eax, 0Ch
0x4F05DF: movsx   eax, ax
0x4F05E2: sar     edx, 0Ch
0x4F05E5: movzx   edx, dx
0x4F05E8: shl     eax, 10h
0x4F05EB: or      eax, edx
0x4F05ED: push    eax
0x4F05EE: call    NiTMap_GetAt; Verified: looks up auxiliary map at WorldSpace +0x60 by packed position-derived cell coordinates; exact mapped payload semantics remain Unknown.
0x4F05F3: mov     eax, [esp+0Ch+var_8]
0x4F05F7: add     esp, 0Ch
0x4F05FA: retn    4
