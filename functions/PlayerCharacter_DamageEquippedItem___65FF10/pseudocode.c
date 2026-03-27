void __userpurge PlayerCharacter_DamageEquippedItem_(
        PlayerCharacter *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        void **a4,
        int a5,
        int a6)
{
  if ( !g_GodMode )
    Actor_DamageEquippedItem_(a1, a2, a3, a4, a5, a6);
}
