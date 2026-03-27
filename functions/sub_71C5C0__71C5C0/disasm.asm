0x71C5C0: sub     esp, 74h
0x71C5C3: mov     eax, [esp+74h+arg_10]
0x71C5CA: push    ebx
0x71C5CB: mov     ebx, [esp+78h+arg_4]
0x71C5D2: push    ebp
0x71C5D3: push    esi
0x71C5D4: mov     esi, [esp+80h+arg_0]
0x71C5DB: mov     ecx, esi
0x71C5DD: imul    ecx, ebx
0x71C5E0: push    edi
0x71C5E1: mov     edi, [eax+14h]
0x71C5E4: push    ecx; Size
0x71C5E5: call    FormHeapAlloc
0x71C5EA: shr     esi, 1
0x71C5EC: imul    esi, ebx
0x71C5EF: add     esp, 4
0x71C5F2: mov     edx, eax
0x71C5F4: xor     ecx, ecx
0x71C5F6: test    esi, esi
0x71C5F8: mov     [esp+84h+var_44], edx
0x71C5FC: jbe     short loc_71C624
0x71C5FE: mov     ebp, [esp+84h+arg_18]
0x71C605: movzx   ebx, byte ptr [ecx+ebp]
0x71C609: shr     bl, 4
0x71C60C: mov     [eax], bl
0x71C60E: movzx   ebx, byte ptr [ecx+ebp]
0x71C612: add     eax, 1
0x71C615: and     bl, 0Fh
0x71C618: mov     [eax], bl
0x71C61A: add     ecx, 1
0x71C61D: add     eax, 1
0x71C620: cmp     ecx, esi
0x71C622: jb      short loc_71C605
0x71C624: mov     eax, [esp+84h+arg_14]
0x71C62B: movzx   ecx, byte ptr [eax+16h]
0x71C62F: mov     [esp+84h+var_48], edx
0x71C633: mov     edx, [eax]
0x71C635: mov     [esp+84h+var_74], edx
0x71C639: movzx   edx, byte ptr [eax+12h]
0x71C63D: mov     [esp+84h+var_64], ecx
0x71C641: mov     ecx, [eax+8]
0x71C644: mov     [esp+84h+var_5C], ecx
0x71C648: movzx   ecx, byte ptr [eax+11h]
0x71C64C: mov     [esp+84h+var_60], edx
0x71C650: movzx   edx, byte ptr [eax+15h]
0x71C654: movzx   ebx, byte ptr [eax+14h]
0x71C658: movzx   esi, byte ptr [eax+10h]
0x71C65C: mov     [esp+84h+var_6C], ecx
0x71C660: movzx   ecx, byte ptr [eax+17h]
0x71C664: mov     [esp+84h+var_70], edx
0x71C668: mov     edx, [eax+4]
0x71C66B: mov     [esp+84h+var_68], edx
0x71C66F: mov     edx, 0FFh
0x71C674: shr     edx, cl
0x71C676: movzx   ecx, byte ptr [eax+13h]
0x71C67A: shl     edx, cl
0x71C67C: lea     ecx, [esp+84h+var_3D]
0x71C680: sub     ecx, edi
0x71C682: mov     [esp+84h+var_54], ecx
0x71C686: and     edx, [eax+0Ch]
0x71C689: lea     ecx, [esp+84h+var_39]
0x71C68D: sub     ecx, edi
0x71C68F: mov     [esp+84h+var_50], ecx
0x71C693: lea     ecx, [esp+84h+var_35]
0x71C697: sub     ecx, edi
0x71C699: mov     [esp+84h+var_58], 0
0x71C6A1: lea     eax, [edi+1]
0x71C6A4: mov     [esp+84h+var_4C], ecx
0x71C6A8: jmp     short loc_71C6B0
0x71C6AA: align 10h
0x71C6B0: movzx   edi, byte ptr [eax-1]
0x71C6B4: movzx   ebp, byte ptr [eax+1]
0x71C6B8: mov     cl, bl
0x71C6BA: shr     edi, cl
0x71C6BC: mov     ecx, esi
0x71C6BE: shl     edi, cl
0x71C6C0: movzx   ecx, byte ptr [esp+84h+var_64]
0x71C6C5: shr     ebp, cl
0x71C6C7: and     edi, [esp+84h+var_74]
0x71C6CB: mov     ecx, [esp+84h+var_60]
0x71C6CF: shl     ebp, cl
0x71C6D1: movzx   ecx, byte ptr [esp+84h+var_70]
0x71C6D6: and     ebp, [esp+84h+var_5C]
0x71C6DA: or      edi, ebp
0x71C6DC: movzx   ebp, byte ptr [eax]
0x71C6DF: shr     ebp, cl
0x71C6E1: mov     ecx, [esp+84h+var_6C]
0x71C6E5: shl     ebp, cl
0x71C6E7: mov     ecx, [esp+84h+var_58]
0x71C6EB: and     ebp, [esp+84h+var_68]
0x71C6EF: or      edi, ebp
0x71C6F1: or      edi, edx
0x71C6F3: mov     [esp+ecx*4+44h], edi
0x71C6F7: movzx   edi, byte ptr [eax+3]
0x71C6FB: movzx   ebp, byte ptr [eax+4]
0x71C6FF: mov     cl, bl
0x71C701: shr     edi, cl
0x71C703: mov     ecx, esi
0x71C705: shl     edi, cl
0x71C707: movzx   ecx, byte ptr [esp+84h+var_70]
0x71C70C: and     edi, [esp+84h+var_74]
0x71C710: shr     ebp, cl
0x71C712: mov     ecx, [esp+84h+var_6C]
0x71C716: shl     ebp, cl
0x71C718: movzx   ecx, byte ptr [esp+84h+var_64]
0x71C71D: and     ebp, [esp+84h+var_68]
0x71C721: or      edi, ebp
0x71C723: movzx   ebp, byte ptr [eax+5]
0x71C727: shr     ebp, cl
0x71C729: mov     ecx, [esp+84h+var_60]
0x71C72D: shl     ebp, cl
0x71C72F: mov     ecx, [esp+84h+var_54]
0x71C733: and     ebp, [esp+84h+var_5C]
0x71C737: or      edi, ebp
0x71C739: movzx   ebp, byte ptr [eax+8]
0x71C73D: or      edi, edx
0x71C73F: mov     [ecx+eax], edi
0x71C742: movzx   edi, byte ptr [eax+7]
0x71C746: mov     cl, bl
0x71C748: shr     edi, cl
0x71C74A: mov     ecx, esi
0x71C74C: shl     edi, cl
0x71C74E: movzx   ecx, byte ptr [esp+84h+var_70]
0x71C753: and     edi, [esp+84h+var_74]
0x71C757: shr     ebp, cl
0x71C759: mov     ecx, [esp+84h+var_6C]
0x71C75D: shl     ebp, cl
0x71C75F: movzx   ecx, byte ptr [esp+84h+var_64]
0x71C764: and     ebp, [esp+84h+var_68]
0x71C768: or      edi, ebp
0x71C76A: movzx   ebp, byte ptr [eax+9]
0x71C76E: shr     ebp, cl
0x71C770: mov     ecx, [esp+84h+var_60]
0x71C774: shl     ebp, cl
0x71C776: mov     ecx, [esp+84h+var_50]
0x71C77A: and     ebp, [esp+84h+var_5C]
0x71C77E: or      edi, ebp
0x71C780: movzx   ebp, byte ptr [eax+0Ch]
0x71C784: or      edi, edx
0x71C786: mov     [ecx+eax], edi
0x71C789: movzx   edi, byte ptr [eax+0Bh]
0x71C78D: mov     cl, bl
0x71C78F: shr     edi, cl
0x71C791: mov     ecx, esi
0x71C793: shl     edi, cl
0x71C795: movzx   ecx, byte ptr [esp+84h+var_70]
0x71C79A: and     edi, [esp+84h+var_74]
0x71C79E: shr     ebp, cl
0x71C7A0: mov     ecx, [esp+84h+var_6C]
0x71C7A4: shl     ebp, cl
0x71C7A6: and     ebp, [esp+84h+var_68]
0x71C7AA: movzx   ecx, byte ptr [esp+84h+var_64]
0x71C7AF: or      edi, ebp
0x71C7B1: movzx   ebp, byte ptr [eax+0Dh]
0x71C7B5: shr     ebp, cl
0x71C7B7: mov     ecx, [esp+84h+var_60]
0x71C7BB: add     eax, 10h
0x71C7BE: shl     ebp, cl
0x71C7C0: mov     ecx, [esp+84h+var_4C]
0x71C7C4: and     ebp, [esp+84h+var_5C]
0x71C7C8: or      edi, ebp
0x71C7CA: or      edi, edx
0x71C7CC: mov     [ecx+eax-10h], edi
0x71C7D0: mov     ecx, [esp+84h+var_58]
0x71C7D4: add     ecx, 4
0x71C7D7: cmp     ecx, 10h
0x71C7DA: mov     [esp+84h+var_58], ecx
0x71C7DE: jb      loc_71C6B0
0x71C7E4: mov     ecx, [esp+84h+arg_4]
0x71C7EB: test    ecx, ecx
0x71C7ED: mov     eax, [esp+84h+arg_C]
0x71C7F4: jbe     short loc_71C829
0x71C7F6: mov     esi, [esp+84h+arg_0]
0x71C7FD: mov     edi, ecx
0x71C7FF: mov     ecx, [esp+84h+var_48]
0x71C803: test    esi, esi
0x71C805: jbe     short loc_71C824
0x71C807: mov     edx, esi
0x71C809: lea     esp, [esp+0]
0x71C810: movzx   ebx, byte ptr [ecx]
0x71C813: mov     ebx, [esp+ebx*4+44h]
0x71C817: mov     [eax], ebx
0x71C819: add     eax, 4
0x71C81C: add     ecx, 1
0x71C81F: sub     edx, 1
0x71C822: jnz     short loc_71C810
0x71C824: sub     edi, 1
0x71C827: jnz     short loc_71C803
0x71C829: mov     edx, [esp+84h+var_44]
0x71C82D: push    edx
0x71C82E: call    FormHeapFree
0x71C833: add     esp, 4
0x71C836: pop     edi
0x71C837: pop     esi
0x71C838: pop     ebp
0x71C839: pop     ebx
0x71C83A: add     esp, 74h
0x71C83D: retn
