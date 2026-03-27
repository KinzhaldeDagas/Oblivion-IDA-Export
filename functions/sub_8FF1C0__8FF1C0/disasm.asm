0x8FF1C0: push    ebp
0x8FF1C1: mov     ebp, esp
0x8FF1C3: and     esp, 0FFFFFFF0h
0x8FF1C6: sub     esp, 194h
0x8FF1CC: mov     eax, [ebp+arg_0]
0x8FF1CF: mov     ecx, [eax]
0x8FF1D1: mov     edx, [eax+4]
0x8FF1D4: push    ebx
0x8FF1D5: mov     ebx, [edx]
0x8FF1D7: push    esi
0x8FF1D8: mov     esi, [ebp+arg_4]
0x8FF1DB: movsx   eax, byte ptr [esi+8]
0x8FF1DF: movsx   edx, byte ptr [esi+0Ah]
0x8FF1E3: push    edi
0x8FF1E4: mov     edi, [ecx]
0x8FF1E6: movsx   ecx, byte ptr [esi+9]
0x8FF1EA: mov     [esp+1A0h+var_17C], ecx
0x8FF1EE: movsx   ecx, byte ptr [esi+0Bh]
0x8FF1F2: mov     [esp+1A0h+var_174], ecx
0x8FF1F6: lea     ecx, [esp+1A0h+var_160]
0x8FF1FA: push    ecx
0x8FF1FB: push    eax
0x8FF1FC: mov     [esp+1A8h+var_170], 0
0x8FF201: mov     [esp+1A8h+var_180], eax
0x8FF205: mov     [esp+1A8h+var_178], edx
0x8FF209: mov     [esp+1A8h+var_16C], 0
0x8FF211: mov     edx, [edi]
0x8FF213: push    esi
0x8FF214: mov     ecx, edi
0x8FF216: call    dword ptr [edx+28h]
0x8FF219: mov     ecx, [esp+1A0h+var_17C]
0x8FF21D: mov     edx, [ebx]
0x8FF21F: lea     eax, [esp+1A0h+var_A0]
0x8FF226: push    eax
0x8FF227: mov     eax, [esp+1A4h+var_180]
0x8FF22B: push    ecx
0x8FF22C: lea     ecx, [esi+eax*2]
0x8FF22F: push    ecx
0x8FF230: mov     ecx, ebx
0x8FF232: call    dword ptr [edx+28h]
0x8FF235: mov     eax, [ebp+arg_0]
0x8FF238: lea     edx, [esp+1A0h+var_190]
0x8FF23C: push    edx
0x8FF23D: add     eax, 10h
0x8FF240: push    eax
0x8FF241: push    ebx
0x8FF242: push    edi
0x8FF243: lea     ecx, [esp+1B0h+var_180]
0x8FF247: call    sub_93C690
0x8FF24C: mov     eax, [esp+1A0h+var_16C]
0x8FF250: test    eax, eax
0x8FF252: jz      short loc_8FF25E
0x8FF254: push    esi
0x8FF255: lea     ecx, [esp+1A4h+var_180]
0x8FF259: call    sub_93B660
0x8FF25E: movaps  xmm0, [esp+1A0h+var_190]
0x8FF263: fld     dword ptr [esp+1A0h+var_190+0Ch]
0x8FF267: mov     ecx, [ebp+arg_0]
0x8FF26A: mov     edx, [ecx]
0x8FF26C: mov     eax, [edx+8]
0x8FF26F: movaps  xmm2, xmmword ptr [eax+20h]
0x8FF273: movaps  xmm3, xmmword ptr [eax+10h]
0x8FF277: movaps  xmm1, xmm0
0x8FF27A: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8FF27E: mulps   xmm2, xmm1
0x8FF281: movaps  xmm1, xmm0
0x8FF284: shufps  xmm1, xmm0, 55h ; 'U'
0x8FF288: mulps   xmm3, xmm1
0x8FF28B: movaps  xmm1, xmm0
0x8FF28E: shufps  xmm1, xmm0, 0
0x8FF292: movaps  xmm0, xmmword ptr [eax]
0x8FF295: mov     eax, [ebp+arg_8]
0x8FF298: mulps   xmm0, xmm1
0x8FF29B: addps   xmm0, xmm3
0x8FF29E: addps   xmm0, xmm2
0x8FF2A1: movaps  xmmword ptr [eax], xmm0
0x8FF2A4: fsub    dword ptr [edi+0Ch]
0x8FF2A7: pop     edi
0x8FF2A8: pop     esi
0x8FF2A9: fsub    dword ptr [ebx+0Ch]
0x8FF2AC: pop     ebx
0x8FF2AD: fstp    dword ptr [eax+0Ch]
0x8FF2B0: mov     esp, ebp
0x8FF2B2: pop     ebp
0x8FF2B3: retn
