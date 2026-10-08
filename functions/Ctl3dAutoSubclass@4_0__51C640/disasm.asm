0x51C640: mov     eax, [esp+arg_0]
0x51C644: push    0; arg1
0x51C646: push    eax; reference
0x51C647: call    TESBoundObject_Create3DImpl; Generic bound-object 3D implementation used by many form classes. Obtains/caches the model, clones its NiNode tree for the reference, applies scale, and resets the clone's local transform.
0x51C64C: retn    4
