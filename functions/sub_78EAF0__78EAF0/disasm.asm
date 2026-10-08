0x78EAF0: cmp     byte ptr ds:0B42994h, 0; Oblivion stRandom constructor. The class has no per-instance generator state; if the shared SIdvRandomImpl state is not initialized, it invokes Reseed(-1).
0x78EAF7: push    esi
0x78EAF8: mov     esi, ecx
0x78EAFA: jnz     short loc_78EB03
0x78EAFC: push    0FFFFFFFFh; seed
0x78EAFE: call    OB_stRandom_Reseed_010201A0; Oblivion stRandom::Reseed. Seed -1 derives a nonzero fractional seed from time and either 12345 or an existing uniform sample; explicit seeds <=1 clamp to 1 and use Random::SetLong. Marks the shared generator initialized.
0x78EB03: mov     eax, esi
0x78EB05: pop     esi
0x78EB06: retn
