0x89F0A0: push    ebp
0x89F0A1: mov     ebp, esp
0x89F0A3: and     esp, 0FFFFFFF0h
0x89F0A6: sub     esp, 68h
0x89F0A9: mov     eax, ds:0B30AACh
0x89F0AE: xor     eax, esp
0x89F0B0: mov     [esp+68h+var_4], eax
0x89F0B4: push    esi
0x89F0B5: push    edi
0x89F0B6: mov     edi, ecx
0x89F0B8: mov     esi, [edi+10h]
0x89F0BB: test    esi, esi
0x89F0BD: jz      short loc_89F137
0x89F0BF: cmp     dword ptr [esi+8], 0
0x89F0C3: jz      short loc_89F137
0x89F0C5: lea     ecx, [esp+70h+var_64]
0x89F0C9: call    sub_70FD10
0x89F0CE: fld1
0x89F0D0: mov     ecx, [esi+8]
0x89F0D3: fstp    dword ptr [esp+70h+var_34]
0x89F0D7: test    ecx, ecx
0x89F0D9: jz      short loc_89F0E7
0x89F0DB: mov     eax, [ecx]
0x89F0DD: mov     eax, [eax+14h]
0x89F0E0: lea     edx, [esp+70h+var_34+4]
0x89F0E4: push    edx
0x89F0E5: call    eax
0x89F0E7: movss   xmm1, dword ptr ds:0A3D65Ch
0x89F0EF: movaps  xmm2, xmmword ptr [esp+70h+var_24+4]
0x89F0F4: xorps   xmm0, xmm0
0x89F0F7: movss   xmm0, xmm1
0x89F0FB: movaps  xmm1, [esp+70h+var_34+4]
0x89F100: shufps  xmm0, xmm0, 0
0x89F104: lea     ecx, [esp+70h+var_24+4]
0x89F108: subps   xmm2, xmm1
0x89F10B: mulps   xmm0, xmm2
0x89F10E: push    ecx
0x89F10F: lea     edx, [esp+74h+var_40]
0x89F113: movaps  xmmword ptr [esp+74h+var_24+4], xmm0
0x89F118: addps   xmm0, xmm1
0x89F11B: push    edx
0x89F11C: movaps  [esp+78h+var_34+4], xmm0
0x89F121: call    sub_43F3E0
0x89F126: mov     eax, [edi]
0x89F128: mov     edx, [eax+78h]
0x89F12B: add     esp, 8
0x89F12E: lea     ecx, [esp+70h+var_64]
0x89F132: push    ecx
0x89F133: mov     ecx, edi
0x89F135: call    edx
0x89F137: mov     ecx, [esp+70h+var_4]
0x89F13B: pop     edi
0x89F13C: pop     esi
0x89F13D: xor     ecx, esp
0x89F13F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89F144: mov     esp, ebp
0x89F146: pop     ebp
0x89F147: retn
