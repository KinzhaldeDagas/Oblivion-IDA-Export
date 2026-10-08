0x7A24F0: mov     eax, [esp+seed]; CTreeEngine::SetSeed per local SpeedTreeRT 4.1: 0=random seed, 1=keep existing seed, >1=store provided seed at +0x48.
0x7A24F4: test    eax, eax
0x7A24F6: push    esi
0x7A24F7: mov     esi, ecx
0x7A24F9: jnz     short loc_7A2532
0x7A24FB: push    edi
0x7A24FC: lea     edi, [esi+20h]
0x7A24FF: push    0FFFFFFFFh; seed
0x7A2501: mov     ecx, edi; this
0x7A2503: call    OB_stRandom_Reseed_010201A0; Oblivion stRandom::Reseed. Seed -1 derives a nonzero fractional seed from time and either 12345 or an existing uniform sample; explicit seeds <=1 clamp to 1 and use Random::SetLong. Marks the shared generator initialized.
0x7A2508: fld     dword ptr ds:0A8C690h
0x7A250E: sub     esp, 8
0x7A2511: fstp    [esp+10h+maxValue]; maxValue
0x7A2515: mov     ecx, edi; this
0x7A2517: fld     dword ptr ds:0A379B4h
0x7A251D: fstp    [esp+10h+minValue]; minValue
0x7A2520: call    OB_stRandom_GetUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x7A2525: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x7A252A: pop     edi
0x7A252B: mov     [esi+48h], eax
0x7A252E: pop     esi
0x7A252F: retn    4
0x7A2532: cmp     eax, 1
0x7A2535: jz      short loc_7A253A
0x7A2537: mov     [esi+48h], eax
0x7A253A: pop     esi
0x7A253B: retn    4
