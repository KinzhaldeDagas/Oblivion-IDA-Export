0x71C980: sub     esp, 7Ch
0x71C983: mov     eax, [esp+7Ch+arg_10]
0x71C98A: push    ebx
0x71C98B: push    ebp
0x71C98C: mov     ebp, [eax+14h]
0x71C98F: push    esi
0x71C990: mov     esi, [esp+88h+arg_0]
0x71C997: push    edi
0x71C998: mov     edi, [esp+8Ch+arg_4]
0x71C99F: mov     ecx, esi
0x71C9A1: imul    ecx, edi
0x71C9A4: push    ecx; Size
0x71C9A5: call    FormHeapAlloc
0x71C9AA: shr     esi, 1
0x71C9AC: imul    esi, edi
0x71C9AF: add     esp, 4
0x71C9B2: mov     edx, eax
0x71C9B4: xor     ecx, ecx
0x71C9B6: test    esi, esi
0x71C9B8: mov     [esp+8Ch+var_44], edx
0x71C9BC: jbe     short loc_71C9E4
0x71C9BE: mov     edi, [esp+8Ch+arg_18]
0x71C9C5: movzx   ebx, byte ptr [ecx+edi]
0x71C9C9: shr     bl, 4
0x71C9CC: mov     [eax], bl
0x71C9CE: movzx   ebx, byte ptr [ecx+edi]
0x71C9D2: add     eax, 1
0x71C9D5: and     bl, 0Fh
0x71C9D8: mov     [eax], bl
0x71C9DA: add     ecx, 1
0x71C9DD: add     eax, 1
0x71C9E0: cmp     ecx, esi
0x71C9E2: jb      short loc_71C9C5
0x71C9E4: mov     eax, [esp+8Ch+arg_14]
0x71C9EB: movzx   ecx, byte ptr [eax+17h]
0x71C9EF: mov     [esp+8Ch+var_64], ecx
0x71C9F3: movzx   ecx, byte ptr [eax+13h]
0x71C9F7: mov     [esp+8Ch+var_60], ecx
0x71C9FB: mov     ecx, [eax+0Ch]
0x71C9FE: mov     [esp+8Ch+var_5C], ecx
0x71CA02: movzx   ecx, byte ptr [eax+16h]
0x71CA06: mov     [esp+8Ch+var_70], ecx
0x71CA0A: movzx   ecx, byte ptr [eax+12h]
0x71CA0E: movzx   esi, byte ptr [eax+10h]
0x71CA12: mov     edi, [eax]
0x71CA14: mov     [esp+8Ch+var_6C], ecx
0x71CA18: mov     ecx, [eax+8]
0x71CA1B: mov     [esp+8Ch+var_68], ecx
0x71CA1F: movzx   ecx, byte ptr [eax+15h]
0x71CA23: mov     [esp+8Ch+var_7C], ecx
0x71CA27: movzx   ecx, byte ptr [eax+11h]
0x71CA2B: mov     [esp+8Ch+var_78], ecx
0x71CA2F: lea     ecx, [esp+8Ch+var_3E]
0x71CA33: sub     ecx, ebp
0x71CA35: mov     [esp+8Ch+var_54], ecx
0x71CA39: lea     ecx, [esp+8Ch+var_3A]
0x71CA3D: sub     ecx, ebp
0x71CA3F: mov     [esp+8Ch+var_50], ecx
0x71CA43: mov     [esp+8Ch+var_48], edx
0x71CA47: movzx   edx, byte ptr [eax+14h]
0x71CA4B: mov     eax, [eax+4]
0x71CA4E: lea     ecx, [esp+8Ch+var_36]
0x71CA52: sub     ecx, ebp
0x71CA54: mov     [esp+8Ch+var_74], eax
0x71CA58: mov     [esp+8Ch+var_58], 0
0x71CA60: lea     eax, [ebp+2]
0x71CA63: mov     [esp+8Ch+var_4C], ecx
0x71CA67: jmp     short loc_71CA70
0x71CA69: align 10h
0x71CA70: movzx   ebx, byte ptr [eax-2]
0x71CA74: movzx   ebp, byte ptr [eax-1]
0x71CA78: mov     cl, dl
0x71CA7A: shr     ebx, cl
0x71CA7C: mov     ecx, esi
0x71CA7E: shl     ebx, cl
0x71CA80: movzx   ecx, byte ptr [esp+8Ch+var_7C]
0x71CA85: shr     ebp, cl
0x71CA87: mov     ecx, [esp+8Ch+var_78]
0x71CA8B: and     ebx, edi
0x71CA8D: shl     ebp, cl
0x71CA8F: movzx   ecx, byte ptr [esp+8Ch+var_64]
0x71CA94: and     ebp, [esp+8Ch+var_74]
0x71CA98: or      ebx, ebp
0x71CA9A: movzx   ebp, byte ptr [eax+1]
0x71CA9E: shr     ebp, cl
0x71CAA0: mov     ecx, [esp+8Ch+var_60]
0x71CAA4: shl     ebp, cl
0x71CAA6: movzx   ecx, byte ptr [esp+8Ch+var_70]
0x71CAAB: and     ebp, [esp+8Ch+var_5C]
0x71CAAF: or      ebx, ebp
0x71CAB1: movzx   ebp, byte ptr [eax]
0x71CAB4: shr     ebp, cl
0x71CAB6: mov     ecx, [esp+8Ch+var_6C]
0x71CABA: shl     ebp, cl
0x71CABC: mov     ecx, [esp+8Ch+var_58]
0x71CAC0: and     ebp, [esp+8Ch+var_68]
0x71CAC4: or      ebx, ebp
0x71CAC6: mov     [esp+ecx*4+4Ch], ebx
0x71CACA: movzx   ebx, byte ptr [eax+2]
0x71CACE: movzx   ebp, byte ptr [eax+3]
0x71CAD2: mov     cl, dl
0x71CAD4: shr     ebx, cl
0x71CAD6: mov     ecx, esi
0x71CAD8: shl     ebx, cl
0x71CADA: movzx   ecx, byte ptr [esp+8Ch+var_7C]
0x71CADF: shr     ebp, cl
0x71CAE1: mov     ecx, [esp+8Ch+var_78]
0x71CAE5: and     ebx, edi
0x71CAE7: shl     ebp, cl
0x71CAE9: movzx   ecx, byte ptr [esp+8Ch+var_70]
0x71CAEE: and     ebp, [esp+8Ch+var_74]
0x71CAF2: or      ebx, ebp
0x71CAF4: movzx   ebp, byte ptr [eax+4]
0x71CAF8: shr     ebp, cl
0x71CAFA: mov     ecx, [esp+8Ch+var_6C]
0x71CAFE: shl     ebp, cl
0x71CB00: movzx   ecx, byte ptr [esp+8Ch+var_64]
0x71CB05: and     ebp, [esp+8Ch+var_68]
0x71CB09: or      ebx, ebp
0x71CB0B: movzx   ebp, byte ptr [eax+5]
0x71CB0F: shr     ebp, cl
0x71CB11: mov     ecx, [esp+8Ch+var_60]
0x71CB15: shl     ebp, cl
0x71CB17: mov     ecx, [esp+8Ch+var_54]
0x71CB1B: and     ebp, [esp+8Ch+var_5C]
0x71CB1F: or      ebx, ebp
0x71CB21: movzx   ebp, byte ptr [eax+7]
0x71CB25: mov     [ecx+eax], ebx
0x71CB28: movzx   ebx, byte ptr [eax+6]
0x71CB2C: mov     cl, dl
0x71CB2E: shr     ebx, cl
0x71CB30: mov     ecx, esi
0x71CB32: shl     ebx, cl
0x71CB34: movzx   ecx, byte ptr [esp+8Ch+var_7C]
0x71CB39: shr     ebp, cl
0x71CB3B: mov     ecx, [esp+8Ch+var_78]
0x71CB3F: and     ebx, edi
0x71CB41: shl     ebp, cl
0x71CB43: movzx   ecx, byte ptr [esp+8Ch+var_70]
0x71CB48: and     ebp, [esp+8Ch+var_74]
0x71CB4C: or      ebx, ebp
0x71CB4E: movzx   ebp, byte ptr [eax+8]
0x71CB52: shr     ebp, cl
0x71CB54: mov     ecx, [esp+8Ch+var_6C]
0x71CB58: shl     ebp, cl
0x71CB5A: movzx   ecx, byte ptr [esp+8Ch+var_64]
0x71CB5F: and     ebp, [esp+8Ch+var_68]
0x71CB63: or      ebx, ebp
0x71CB65: movzx   ebp, byte ptr [eax+9]
0x71CB69: shr     ebp, cl
0x71CB6B: mov     ecx, [esp+8Ch+var_60]
0x71CB6F: shl     ebp, cl
0x71CB71: mov     ecx, [esp+8Ch+var_50]
0x71CB75: add     eax, 10h
0x71CB78: and     ebp, [esp+8Ch+var_5C]
0x71CB7C: or      ebx, ebp
0x71CB7E: movzx   ebp, byte ptr [eax-5]
0x71CB82: mov     [ecx+eax-10h], ebx
0x71CB86: movzx   ebx, byte ptr [eax-6]
0x71CB8A: mov     cl, dl
0x71CB8C: shr     ebx, cl
0x71CB8E: mov     ecx, esi
0x71CB90: shl     ebx, cl
0x71CB92: movzx   ecx, byte ptr [esp+8Ch+var_7C]
0x71CB97: shr     ebp, cl
0x71CB99: mov     ecx, [esp+8Ch+var_78]
0x71CB9D: and     ebx, edi
0x71CB9F: shl     ebp, cl
0x71CBA1: movzx   ecx, byte ptr [esp+8Ch+var_70]
0x71CBA6: and     ebp, [esp+8Ch+var_74]
0x71CBAA: or      ebx, ebp
0x71CBAC: movzx   ebp, byte ptr [eax-4]
0x71CBB0: shr     ebp, cl
0x71CBB2: mov     ecx, [esp+8Ch+var_6C]
0x71CBB6: shl     ebp, cl
0x71CBB8: movzx   ecx, byte ptr [esp+8Ch+var_64]
0x71CBBD: and     ebp, [esp+8Ch+var_68]
0x71CBC1: or      ebx, ebp
0x71CBC3: movzx   ebp, byte ptr [eax-3]
0x71CBC7: shr     ebp, cl
0x71CBC9: mov     ecx, [esp+8Ch+var_60]
0x71CBCD: shl     ebp, cl
0x71CBCF: mov     ecx, [esp+8Ch+var_4C]
0x71CBD3: and     ebp, [esp+8Ch+var_5C]
0x71CBD7: or      ebx, ebp
0x71CBD9: mov     [ecx+eax-10h], ebx
0x71CBDD: mov     ecx, [esp+8Ch+var_58]
0x71CBE1: add     ecx, 4
0x71CBE4: cmp     ecx, 10h
0x71CBE7: mov     [esp+8Ch+var_58], ecx
0x71CBEB: jb      loc_71CA70
0x71CBF1: mov     ecx, [esp+8Ch+arg_4]
0x71CBF8: test    ecx, ecx
0x71CBFA: mov     eax, [esp+8Ch+arg_C]
0x71CC01: jbe     short loc_71CC2F
0x71CC03: mov     esi, [esp+8Ch+arg_0]
0x71CC0A: mov     edi, ecx
0x71CC0C: mov     ecx, [esp+8Ch+var_48]
0x71CC10: test    esi, esi
0x71CC12: jbe     short loc_71CC2A
0x71CC14: mov     edx, esi
0x71CC16: movzx   ebx, byte ptr [ecx]
0x71CC19: mov     ebx, [esp+ebx*4+4Ch]
0x71CC1D: mov     [eax], ebx
0x71CC1F: add     eax, 4
0x71CC22: add     ecx, 1
0x71CC25: sub     edx, 1
0x71CC28: jnz     short loc_71CC16
0x71CC2A: sub     edi, 1
0x71CC2D: jnz     short loc_71CC10
0x71CC2F: mov     edx, [esp+8Ch+var_44]
0x71CC33: push    edx
0x71CC34: call    FormHeapFree
0x71CC39: add     esp, 4
0x71CC3C: pop     edi
0x71CC3D: pop     esi
0x71CC3E: pop     ebp
0x71CC3F: pop     ebx
0x71CC40: add     esp, 7Ch
0x71CC43: retn
