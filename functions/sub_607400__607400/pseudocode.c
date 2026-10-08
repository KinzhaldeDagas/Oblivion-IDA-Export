// Return projectile-retained bow EnchantmentItem at ArrowProjectile+0x80. This is captured only when release-time charge covers the shot cost.
EnchantmentItem *__thiscall ArrowProjectile_GetBowEnchantment(ArrowProjectile *this)
{
  return this->bowEnch; /*0x607406*/
}
