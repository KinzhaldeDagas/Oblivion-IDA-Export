0x6A875D: mov     ecx, [esi+0Ch]
0x6A8760: mov     edx, [ecx+1Ch]
0x6A8763: mov     eax, [edx+58h]
0x6A8766: shr     eax, 1
0x6A8768: test    al, 1
0x6A876A: jnz     short ValueModifierEffect_Apply___ApplyImmediately
0x6A876C: call    EffectItem_GetDuration
0x6A8771: test    eax, eax
0x6A8773: jnz     short ValueModifierEffect_Apply___Wrapup
0x6A8775: mov     ecx, esi
0x6A8777: call    ActiveEffect_Base_IsBoundObjWearable
0x6A877C: test    al, al
0x6A877E: jnz     short ValueModifierEffect_Apply___Wrapup
