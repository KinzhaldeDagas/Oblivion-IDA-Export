0x6A2A57: mov     eax, [ebp+0]; OBMEFix verification 2026-05-30: MagicTarget_AddEffect loads ActiveEffect vtable +0x34, pushes MagicTarget (edi), sets ecx=ActiveEffect (ebp), and calls IsTargetValid before insertion.
0x6A2A5A: mov     edx, [eax+34h]
0x6A2A5D: push    edi
0x6A2A5E: mov     ecx, ebp
0x6A2A60: call    edx; Verified target gate call: ECX is the cloned ActiveEffect and the stack argument is the current MagicTarget; dispatches ActiveEffect vtable slot +0x34. LockEffect/OpenEffect route to LockOrOpenEffect_ValidTarget, which RTTI-requires NonActorMagicTarget and a TESObjectDOOR or TESObjectCONT base form. False prevents insertion and destroys the clone.
0x6A2A62: test    al, al
0x6A2A64: jnz     short MagicTarget_AddEffect___CheckIsWearableEnch
0x6A2A66: cmp     ds:0B3355Ch, al
0x6A2A6C: jz      MagicTarget_AddEffect___Return_0
