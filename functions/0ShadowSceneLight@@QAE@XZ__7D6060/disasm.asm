0x7D6060: push    0FFFFFFFFh
0x7D6062: push    offset ??0ShadowSceneLight@@QAE@XZ_SEH
0x7D6067: mov     eax, large fs:0
0x7D606D: push    eax
0x7D606E: push    ecx
0x7D606F: push    ebx
0x7D6070: push    ebp
0x7D6071: push    esi
0x7D6072: push    edi
0x7D6073: mov     eax, ds:0B30AACh
0x7D6078: xor     eax, esp
0x7D607A: push    eax
0x7D607B: lea     eax, [esp+24h+var_C]
0x7D607F: mov     large fs:0, eax
0x7D6085: mov     esi, ecx
0x7D6087: mov     [esp+24h+var_10], esi
0x7D608B: xor     ebx, ebx
0x7D608D: push    offset NiRefObject_objcount; lpAddend
0x7D6092: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7D6098: mov     [esi+4], ebx
0x7D609B: call    dword ptr ds:0A28078h
0x7D60A1: mov     dword ptr [esi], offset ??_7ShadowSceneLight@@6B@; const ShadowSceneLight::`vftable'
0x7D60A7: mov     [esp+24h+var_4], ebx
0x7D60AB: mov     [esi+0F0h], ebx
0x7D60B1: mov     [esi+0E8h], ebx
0x7D60B7: mov     [esi+0ECh], ebx
0x7D60BD: mov     dword ptr [esi+0E4h], offset ??_7?$NiTPointerList@V?$NiPointer@VNiTriBasedGeom@@@@@@6B@; const NiTPointerList<NiPointer<NiTriBasedGeom>>::`vftable'
0x7D60C7: mov     [esi+0F8h], ebx
0x7D60CD: mov     [esi+100h], ebx
0x7D60D3: mov     [esi+114h], ebx
0x7D60D9: mov     [esi+11Ch], ebx
0x7D60DF: mov     [esi+130h], ebx
0x7D60E5: mov     [esi+140h], ebx
0x7D60EB: mov     [esi+138h], ebx
0x7D60F1: mov     [esi+13Ch], ebx
0x7D60F7: mov     dword ptr [esi+134h], offset ??_7?$NiTPointerList@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTPointerList<NiPointer<NiAVObject>>::`vftable'
0x7D6101: mov     [esi+148h], ebx
0x7D6107: mov     [esi+14Ch], ebx
0x7D610D: mov     byte ptr [esp+24h+var_4], 9
0x7D6112: lea     edi, [esi+150h]
0x7D6118: mov     ebp, 5
0x7D611D: lea     ecx, [ecx+0]
0x7D6120: mov     ecx, edi; this
0x7D6122: call    sub_716DB0
0x7D6127: add     edi, 10h
0x7D612A: sub     ebp, 1
0x7D612D: jns     short loc_7D6120
0x7D612F: fldz
0x7D6131: mov     ebp, ds:0A2807Ch
0x7D6137: mov     dword ptr [esi+1B0h], 3Fh ; '?'
0x7D6141: fst     dword ptr [esi+0D0h]
0x7D6147: fst     dword ptr [esi+0D4h]
0x7D614D: mov     byte ptr [esi+0F5h], 1
0x7D6154: fst     dword ptr [esi+0D8h]
0x7D615A: mov     [esi+0F4h], bl
0x7D6160: mov     [esi+0FCh], bl
0x7D6166: mov     [esi+104h], bl
0x7D616C: mov     eax, ds:0B3F9A8h
0x7D6171: mov     [esi+108h], eax
0x7D6177: mov     ecx, ds:0B3F9ACh
0x7D617D: mov     [esi+10Ch], ecx
0x7D6183: mov     edx, ds:0B3F9B0h
0x7D6189: mov     [esi+110h], edx
0x7D618F: mov     [esi+118h], bx
0x7D6196: mov     edi, [esi+0F8h]
0x7D619C: cmp     edi, ebx
0x7D619E: jz      short loc_7D61C2
0x7D61A0: lea     eax, [edi+4]
0x7D61A3: fstp    st
0x7D61A5: push    eax; lpAddend
0x7D61A6: call    ebp ; InterlockedDecrement
0x7D61A8: test    eax, eax
0x7D61AA: jnz     short loc_7D61BA
0x7D61AC: cmp     edi, ebx
0x7D61AE: jz      short loc_7D61BA
0x7D61B0: mov     edx, [edi]
0x7D61B2: mov     eax, [edx]
0x7D61B4: push    1
0x7D61B6: mov     ecx, edi
0x7D61B8: call    eax
0x7D61BA: fldz
0x7D61BC: mov     [esi+0F8h], ebx
0x7D61C2: mov     edi, [esi+100h]
0x7D61C8: cmp     edi, ebx
0x7D61CA: jz      short loc_7D61EE
0x7D61CC: lea     ecx, [edi+4]
0x7D61CF: fstp    st
0x7D61D1: push    ecx; lpAddend
0x7D61D2: call    ebp ; InterlockedDecrement
0x7D61D4: test    eax, eax
0x7D61D6: jnz     short loc_7D61E6
0x7D61D8: cmp     edi, ebx
0x7D61DA: jz      short loc_7D61E6
0x7D61DC: mov     edx, [edi]
0x7D61DE: mov     eax, [edx]
0x7D61E0: push    1
0x7D61E2: mov     ecx, edi
0x7D61E4: call    eax
0x7D61E6: fldz
0x7D61E8: mov     [esi+100h], ebx
0x7D61EE: mov     edi, [esi+11Ch]
0x7D61F4: cmp     edi, ebx
0x7D61F6: jz      short loc_7D621A
0x7D61F8: lea     ecx, [edi+4]
0x7D61FB: fstp    st
0x7D61FD: push    ecx; lpAddend
0x7D61FE: call    ebp ; InterlockedDecrement
0x7D6200: test    eax, eax
0x7D6202: jnz     short loc_7D6212
0x7D6204: cmp     edi, ebx
0x7D6206: jz      short loc_7D6212
0x7D6208: mov     edx, [edi]
0x7D620A: mov     eax, [edx]
0x7D620C: push    1
0x7D620E: mov     ecx, edi
0x7D6210: call    eax
0x7D6212: fldz
0x7D6214: mov     [esi+11Ch], ebx
0x7D621A: mov     edi, [esi+114h]
0x7D6220: cmp     edi, ebx
0x7D6222: jz      short loc_7D6246
0x7D6224: lea     ecx, [edi+4]
0x7D6227: fstp    st
0x7D6229: push    ecx; lpAddend
0x7D622A: call    ebp ; InterlockedDecrement
0x7D622C: test    eax, eax
0x7D622E: jnz     short loc_7D623E
0x7D6230: cmp     edi, ebx
0x7D6232: jz      short loc_7D623E
0x7D6234: mov     edx, [edi]
0x7D6236: mov     eax, [edx]
0x7D6238: push    1
0x7D623A: mov     ecx, edi
0x7D623C: call    eax
0x7D623E: fldz
0x7D6240: mov     [esi+114h], ebx
0x7D6246: fst     dword ptr [esi+48h]
0x7D6249: fst     dword ptr [esi+44h]
0x7D624C: fst     dword ptr [esi+40h]
0x7D624F: fst     dword ptr [esi+3Ch]
0x7D6252: fst     dword ptr [esi+34h]
0x7D6255: fst     dword ptr [esi+30h]
0x7D6258: fst     dword ptr [esi+2Ch]
0x7D625B: fst     dword ptr [esi+28h]
0x7D625E: fst     dword ptr [esi+20h]
0x7D6261: fst     dword ptr [esi+1Ch]
0x7D6264: fst     dword ptr [esi+18h]
0x7D6267: fst     dword ptr [esi+14h]
0x7D626A: fld1
0x7D626C: fst     dword ptr [esi+4Ch]
0x7D626F: fst     dword ptr [esi+38h]
0x7D6272: fst     dword ptr [esi+24h]
0x7D6275: fst     dword ptr [esi+10h]
0x7D6278: fld     dword ptr ds:0A430CCh
0x7D627E: mov     [esi+0F5h], bl
0x7D6284: fstp    dword ptr [esi+124h]
0x7D628A: mov     [esi+120h], bl
0x7D6290: mov     [esi+12Ch], bl
0x7D6296: fst     dword ptr [esi+128h]
0x7D629C: mov     edi, [esi+130h]
0x7D62A2: cmp     edi, ebx
0x7D62A4: jz      short loc_7D62CC
0x7D62A6: lea     ecx, [edi+4]
0x7D62A9: fstp    st(1)
0x7D62AB: push    ecx; lpAddend
0x7D62AC: fstp    st
0x7D62AE: call    ebp ; InterlockedDecrement
0x7D62B0: test    eax, eax
0x7D62B2: jnz     short loc_7D62C2
0x7D62B4: cmp     edi, ebx
0x7D62B6: jz      short loc_7D62C2
0x7D62B8: mov     edx, [edi]
0x7D62BA: mov     eax, [edx]
0x7D62BC: push    1
0x7D62BE: mov     ecx, edi
0x7D62C0: call    eax
0x7D62C2: fldz
0x7D62C4: mov     [esi+130h], ebx
0x7D62CA: fld1
0x7D62CC: mov     [esi+144h], ebx
0x7D62D2: mov     edi, [esi+148h]
0x7D62D8: cmp     edi, ebx
0x7D62DA: jz      short loc_7D6302
0x7D62DC: lea     ecx, [edi+4]
0x7D62DF: fstp    st(1)
0x7D62E1: push    ecx; lpAddend
0x7D62E2: fstp    st
0x7D62E4: call    ebp ; InterlockedDecrement
0x7D62E6: test    eax, eax
0x7D62E8: jnz     short loc_7D62F8
0x7D62EA: cmp     edi, ebx
0x7D62EC: jz      short loc_7D62F8
0x7D62EE: mov     edx, [edi]
0x7D62F0: mov     eax, [edx]
0x7D62F2: push    1
0x7D62F4: mov     ecx, edi
0x7D62F6: call    eax
0x7D62F8: fldz
0x7D62FA: mov     [esi+148h], ebx
0x7D6300: fld1
0x7D6302: mov     edi, [esi+14Ch]
0x7D6308: cmp     edi, ebx
0x7D630A: jz      short loc_7D6332
0x7D630C: lea     ecx, [edi+4]
0x7D630F: fstp    st(1)
0x7D6311: push    ecx; lpAddend
0x7D6312: fstp    st
0x7D6314: call    ebp ; InterlockedDecrement
0x7D6316: test    eax, eax
0x7D6318: jnz     short loc_7D6328
0x7D631A: cmp     edi, ebx
0x7D631C: jz      short loc_7D6328
0x7D631E: mov     edx, [edi]
0x7D6320: mov     eax, [edx]
0x7D6322: push    1
0x7D6324: mov     ecx, edi
0x7D6326: call    eax
0x7D6328: fldz
0x7D632A: mov     [esi+14Ch], ebx
0x7D6330: fld1
0x7D6332: push    60h ; '`'
0x7D6334: fxch    st(1)
0x7D6336: fstp    dword ptr [esi+0E0h]
0x7D633C: lea     ecx, [esi+1B4h]
0x7D6342: push    ebx
0x7D6343: push    ecx
0x7D6344: fstp    dword ptr [esi+0DCh]
0x7D634A: mov     [esi+214h], bl
0x7D6350: call    __memset
0x7D6355: add     esp, 0Ch
0x7D6358: mov     eax, esi
0x7D635A: mov     ecx, dword ptr [esp+24h+var_C]
0x7D635E: mov     large fs:0, ecx
0x7D6365: pop     ecx
0x7D6366: pop     edi
0x7D6367: pop     esi
0x7D6368: pop     ebp
0x7D6369: pop     ebx
0x7D636A: add     esp, 10h
0x7D636D: retn
