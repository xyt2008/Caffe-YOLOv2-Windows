# i n c l u d e   < b o o s t / m a t h / s p e c i a l _ f u n c t i o n s / n e x t . h p p >  
 # i n c l u d e   < b o o s t / r a n d o m . h p p >  
  
 # i n c l u d e   < l i m i t s >  
  
 # i n c l u d e   " c a f f e / c o m m o n . h p p "  
 # i n c l u d e   " c a f f e / u t i l / m a t h _ f u n c t i o n s . h p p "  
 # i n c l u d e   " c a f f e / u t i l / r n g . h p p "  
  
 n a m e s p a c e   c a f f e   {  
  
 t e m p l a t e < >  
 v o i d   c a f f e _ c p u _ g e m m < f l o a t > ( c o n s t   C B L A S _ T R A N S P O S E   T r a n s A ,  
         c o n s t   C B L A S _ T R A N S P O S E   T r a n s B ,   c o n s t   i n t   M ,   c o n s t   i n t   N ,   c o n s t   i n t   K ,  
         c o n s t   f l o a t   a l p h a ,   c o n s t   f l o a t *   A ,   c o n s t   f l o a t *   B ,   c o n s t   f l o a t   b e t a ,  
         f l o a t *   C )   {  
     i n t   l d a   =   ( T r a n s A   = =   C b l a s N o T r a n s )   ?   K   :   M ;  
     i n t   l d b   =   ( T r a n s B   = =   C b l a s N o T r a n s )   ?   N   :   K ;  
     c b l a s _ s g e m m ( C b l a s R o w M a j o r ,   T r a n s A ,   T r a n s B ,   M ,   N ,   K ,   a l p h a ,   A ,   l d a ,   B ,  
             l d b ,   b e t a ,   C ,   N ) ;  
 }  
  
 t e m p l a t e < >  
 v o i d   c a f f e _ c p u _ g e m m < d o u b l e > ( c o n s t   C B L A S _ T R A N S P O S E   T r a n s A ,  
         c o n s t   C B L A S _ T R A N S P O S E   T r a n s B ,   c o n s t   i n t   M ,   c o n s t   i n t   N ,   c o n s t   i n t   K ,  
         c o n s t   d o u b l e   a l p h a ,   c o n s t   d o u b l e *   A ,   c o n s t   d o u b l e *   B ,   c o n s t   d o u b l e   b e t a ,  
         d o u b l e *   C )   {  
     i n t   l d a   =   ( T r a n s A   = =   C b l a s N o T r a n s )   ?   K   :   M ;  
     i n t   l d b   =   ( T r a n s B   = =   C b l a s N o T r a n s )   ?   N   :   K ;  
     c b l a s _ d g e m m ( C b l a s R o w M a j o r ,   T r a n s A ,   T r a n s B ,   M ,   N ,   K ,   a l p h a ,   A ,   l d a ,   B ,  
             l d b ,   b e t a ,   C ,   N ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ c p u _ g e m v < f l o a t > ( c o n s t   C B L A S _ T R A N S P O S E   T r a n s A ,   c o n s t   i n t   M ,  
         c o n s t   i n t   N ,   c o n s t   f l o a t   a l p h a ,   c o n s t   f l o a t *   A ,   c o n s t   f l o a t *   x ,  
         c o n s t   f l o a t   b e t a ,   f l o a t *   y )   {  
     c b l a s _ s g e m v ( C b l a s R o w M a j o r ,   T r a n s A ,   M ,   N ,   a l p h a ,   A ,   N ,   x ,   1 ,   b e t a ,   y ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ c p u _ g e m v < d o u b l e > ( c o n s t   C B L A S _ T R A N S P O S E   T r a n s A ,   c o n s t   i n t   M ,  
         c o n s t   i n t   N ,   c o n s t   d o u b l e   a l p h a ,   c o n s t   d o u b l e *   A ,   c o n s t   d o u b l e *   x ,  
         c o n s t   d o u b l e   b e t a ,   d o u b l e *   y )   {  
     c b l a s _ d g e m v ( C b l a s R o w M a j o r ,   T r a n s A ,   M ,   N ,   a l p h a ,   A ,   N ,   x ,   1 ,   b e t a ,   y ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ a x p y < f l o a t > ( c o n s t   i n t   N ,   c o n s t   f l o a t   a l p h a ,   c o n s t   f l o a t *   X ,  
         f l o a t *   Y )   {   c b l a s _ s a x p y ( N ,   a l p h a ,   X ,   1 ,   Y ,   1 ) ;   }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ a x p y < d o u b l e > ( c o n s t   i n t   N ,   c o n s t   d o u b l e   a l p h a ,   c o n s t   d o u b l e *   X ,  
         d o u b l e *   Y )   {   c b l a s _ d a x p y ( N ,   a l p h a ,   X ,   1 ,   Y ,   1 ) ;   }  
  
 t e m p l a t e   < t y p e n a m e   D t y p e >  
 v o i d   c a f f e _ s e t ( c o n s t   i n t   N ,   c o n s t   D t y p e   a l p h a ,   D t y p e *   Y )   {  
     i f   ( a l p h a   = =   0 )   {  
         m e m s e t ( Y ,   0 ,   s i z e o f ( D t y p e )   *   N ) ;     / /   N O L I N T ( c a f f e / a l t _ f n )  
         r e t u r n ;  
     }  
     f o r   ( i n t   i   =   0 ;   i   <   N ;   + + i )   {  
         Y [ i ]   =   a l p h a ;  
     }  
 }  
  
 t e m p l a t e   v o i d   c a f f e _ s e t < i n t > ( c o n s t   i n t   N ,   c o n s t   i n t   a l p h a ,   i n t *   Y ) ;  
 t e m p l a t e   v o i d   c a f f e _ s e t < f l o a t > ( c o n s t   i n t   N ,   c o n s t   f l o a t   a l p h a ,   f l o a t *   Y ) ;  
 t e m p l a t e   v o i d   c a f f e _ s e t < d o u b l e > ( c o n s t   i n t   N ,   c o n s t   d o u b l e   a l p h a ,   d o u b l e *   Y ) ;  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ a d d _ s c a l a r ( c o n s t   i n t   N ,   c o n s t   f l o a t   a l p h a ,   f l o a t *   Y )   {  
     f o r   ( i n t   i   =   0 ;   i   <   N ;   + + i )   {  
         Y [ i ]   + =   a l p h a ;  
     }  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ a d d _ s c a l a r ( c o n s t   i n t   N ,   c o n s t   d o u b l e   a l p h a ,   d o u b l e *   Y )   {  
     f o r   ( i n t   i   =   0 ;   i   <   N ;   + + i )   {  
         Y [ i ]   + =   a l p h a ;  
     }  
 }  
  
 t e m p l a t e   < t y p e n a m e   D t y p e >  
 v o i d   c a f f e _ c o p y ( c o n s t   i n t   N ,   c o n s t   D t y p e *   X ,   D t y p e *   Y )   {  
     i f   ( X   ! =   Y )   {  
         i f   ( C a f f e : : m o d e ( )   = =   C a f f e : : G P U )   {  
 # i f n d e f   C P U _ O N L Y  
             / /   N O L I N T _ N E X T _ L I N E ( c a f f e / a l t _ f n )  
             C U D A _ C H E C K ( c u d a M e m c p y ( Y ,   X ,   s i z e o f ( D t y p e )   *   N ,   c u d a M e m c p y D e f a u l t ) ) ;  
 # e l s e  
             N O _ G P U ;  
 # e n d i f  
         }   e l s e   {  
             m e m c p y ( Y ,   X ,   s i z e o f ( D t y p e )   *   N ) ;     / /   N O L I N T ( c a f f e / a l t _ f n )  
         }  
     }  
 }  
  
 t e m p l a t e   v o i d   c a f f e _ c o p y < b o o l > ( c o n s t   i n t   N ,   c o n s t   b o o l *   X ,   b o o l *   Y ) ;  
 t e m p l a t e   v o i d   c a f f e _ c o p y < i n t > ( c o n s t   i n t   N ,   c o n s t   i n t *   X ,   i n t *   Y ) ;  
 t e m p l a t e   v o i d   c a f f e _ c o p y < u n s i g n e d   i n t > ( c o n s t   i n t   N ,   c o n s t   u n s i g n e d   i n t *   X ,  
         u n s i g n e d   i n t *   Y ) ;  
 t e m p l a t e   v o i d   c a f f e _ c o p y < f l o a t > ( c o n s t   i n t   N ,   c o n s t   f l o a t *   X ,   f l o a t *   Y ) ;  
 t e m p l a t e   v o i d   c a f f e _ c o p y < d o u b l e > ( c o n s t   i n t   N ,   c o n s t   d o u b l e *   X ,   d o u b l e *   Y ) ;  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ s c a l < f l o a t > ( c o n s t   i n t   N ,   c o n s t   f l o a t   a l p h a ,   f l o a t   * X )   {  
     c b l a s _ s s c a l ( N ,   a l p h a ,   X ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ s c a l < d o u b l e > ( c o n s t   i n t   N ,   c o n s t   d o u b l e   a l p h a ,   d o u b l e   * X )   {  
     c b l a s _ d s c a l ( N ,   a l p h a ,   X ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ c p u _ a x p b y < f l o a t > ( c o n s t   i n t   N ,   c o n s t   f l o a t   a l p h a ,   c o n s t   f l o a t *   X ,  
                                                         c o n s t   f l o a t   b e t a ,   f l o a t *   Y )   {  
     c b l a s _ s a x p b y ( N ,   a l p h a ,   X ,   1 ,   b e t a ,   Y ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ c p u _ a x p b y < d o u b l e > ( c o n s t   i n t   N ,   c o n s t   d o u b l e   a l p h a ,   c o n s t   d o u b l e *   X ,  
                                                           c o n s t   d o u b l e   b e t a ,   d o u b l e *   Y )   {  
     c b l a s _ d a x p b y ( N ,   a l p h a ,   X ,   1 ,   b e t a ,   Y ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ a d d < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   c o n s t   f l o a t *   b ,  
         f l o a t *   y )   {  
     v s A d d ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ a d d < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   c o n s t   d o u b l e *   b ,  
         d o u b l e *   y )   {  
     v d A d d ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ s u b < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   c o n s t   f l o a t *   b ,  
         f l o a t *   y )   {  
     v s S u b ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ s u b < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   c o n s t   d o u b l e *   b ,  
         d o u b l e *   y )   {  
     v d S u b ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ m u l < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   c o n s t   f l o a t *   b ,  
         f l o a t *   y )   {  
     v s M u l ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ m u l < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   c o n s t   d o u b l e *   b ,  
         d o u b l e *   y )   {  
     v d M u l ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ d i v < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   c o n s t   f l o a t *   b ,  
         f l o a t *   y )   {  
     v s D i v ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ d i v < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   c o n s t   d o u b l e *   b ,  
         d o u b l e *   y )   {  
     v d D i v ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ p o w x < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   c o n s t   f l o a t   b ,  
         f l o a t *   y )   {  
     v s P o w x ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ p o w x < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   c o n s t   d o u b l e   b ,  
         d o u b l e *   y )   {  
     v d P o w x ( n ,   a ,   b ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ s q r < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   f l o a t *   y )   {  
     v s S q r ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ s q r < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   d o u b l e *   y )   {  
     v d S q r ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ s q r t < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   f l o a t *   y )   {  
     v s S q r t ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ s q r t < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   d o u b l e *   y )   {  
     v d S q r t ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ e x p < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   f l o a t *   y )   {  
     v s E x p ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ e x p < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   d o u b l e *   y )   {  
     v d E x p ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ l o g < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   f l o a t *   y )   {  
     v s L n ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ l o g < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   d o u b l e *   y )   {  
     v d L n ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ a b s < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   a ,   f l o a t *   y )   {  
         v s A b s ( n ,   a ,   y ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ a b s < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   a ,   d o u b l e *   y )   {  
         v d A b s ( n ,   a ,   y ) ;  
 }  
  
 u n s i g n e d   i n t   c a f f e _ r n g _ r a n d ( )   {  
     r e t u r n   ( * c a f f e _ r n g ( ) ) ( ) ;  
 }  
  
 t e m p l a t e   < t y p e n a m e   D t y p e >  
 D t y p e   c a f f e _ n e x t a f t e r ( c o n s t   D t y p e   b )   {  
     r e t u r n   b o o s t : : m a t h : : n e x t a f t e r < D t y p e > (  
             b ,   s t d : : n u m e r i c _ l i m i t s < D t y p e > : : m a x ( ) ) ;  
 }  
  
 t e m p l a t e  
 f l o a t   c a f f e _ n e x t a f t e r ( c o n s t   f l o a t   b ) ;  
  
 t e m p l a t e  
 d o u b l e   c a f f e _ n e x t a f t e r ( c o n s t   d o u b l e   b ) ;  
  
 t e m p l a t e   < t y p e n a m e   D t y p e >  
 v o i d   c a f f e _ r n g _ u n i f o r m ( c o n s t   i n t   n ,   c o n s t   D t y p e   a ,   c o n s t   D t y p e   b ,   D t y p e *   r )   {  
     C H E C K _ G E ( n ,   0 ) ;  
     C H E C K ( r ) ;  
     C H E C K _ L E ( a ,   b ) ;  
     b o o s t : : u n i f o r m _ r e a l < D t y p e >   r a n d o m _ d i s t r i b u t i o n ( a ,   c a f f e _ n e x t a f t e r < D t y p e > ( b ) ) ;  
     b o o s t : : v a r i a t e _ g e n e r a t o r < c a f f e : : r n g _ t * ,   b o o s t : : u n i f o r m _ r e a l < D t y p e >   >  
             v a r i a t e _ g e n e r a t o r ( c a f f e _ r n g ( ) ,   r a n d o m _ d i s t r i b u t i o n ) ;  
     f o r   ( i n t   i   =   0 ;   i   <   n ;   + + i )   {  
         r [ i ]   =   v a r i a t e _ g e n e r a t o r ( ) ;  
     }  
 }  
  
 t e m p l a t e  
 v o i d   c a f f e _ r n g _ u n i f o r m < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t   a ,   c o n s t   f l o a t   b ,  
                                                             f l o a t *   r ) ;  
  
 t e m p l a t e  
 v o i d   c a f f e _ r n g _ u n i f o r m < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e   a ,   c o n s t   d o u b l e   b ,  
                                                               d o u b l e *   r ) ;  
  
 t e m p l a t e   < t y p e n a m e   D t y p e >  
 v o i d   c a f f e _ r n g _ g a u s s i a n ( c o n s t   i n t   n ,   c o n s t   D t y p e   a ,  
                                                 c o n s t   D t y p e   s i g m a ,   D t y p e *   r )   {  
     C H E C K _ G E ( n ,   0 ) ;  
     C H E C K ( r ) ;  
     C H E C K _ G T ( s i g m a ,   0 ) ;  
     b o o s t : : n o r m a l _ d i s t r i b u t i o n < D t y p e >   r a n d o m _ d i s t r i b u t i o n ( a ,   s i g m a ) ;  
     b o o s t : : v a r i a t e _ g e n e r a t o r < c a f f e : : r n g _ t * ,   b o o s t : : n o r m a l _ d i s t r i b u t i o n < D t y p e >   >  
             v a r i a t e _ g e n e r a t o r ( c a f f e _ r n g ( ) ,   r a n d o m _ d i s t r i b u t i o n ) ;  
     f o r   ( i n t   i   =   0 ;   i   <   n ;   + + i )   {  
         r [ i ]   =   v a r i a t e _ g e n e r a t o r ( ) ;  
     }  
 }  
  
 t e m p l a t e  
 v o i d   c a f f e _ r n g _ g a u s s i a n < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t   m u ,  
                                                               c o n s t   f l o a t   s i g m a ,   f l o a t *   r ) ;  
  
 t e m p l a t e  
 v o i d   c a f f e _ r n g _ g a u s s i a n < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e   m u ,  
                                                                 c o n s t   d o u b l e   s i g m a ,   d o u b l e *   r ) ;  
  
 t e m p l a t e   < t y p e n a m e   D t y p e >  
 v o i d   c a f f e _ r n g _ b e r n o u l l i ( c o n s t   i n t   n ,   c o n s t   D t y p e   p ,   i n t *   r )   {  
     C H E C K _ G E ( n ,   0 ) ;  
     C H E C K ( r ) ;  
     C H E C K _ G E ( p ,   0 ) ;  
     C H E C K _ L E ( p ,   1 ) ;  
     b o o s t : : b e r n o u l l i _ d i s t r i b u t i o n < D t y p e >   r a n d o m _ d i s t r i b u t i o n ( p ) ;  
     b o o s t : : v a r i a t e _ g e n e r a t o r < c a f f e : : r n g _ t * ,   b o o s t : : b e r n o u l l i _ d i s t r i b u t i o n < D t y p e >   >  
             v a r i a t e _ g e n e r a t o r ( c a f f e _ r n g ( ) ,   r a n d o m _ d i s t r i b u t i o n ) ;  
     f o r   ( i n t   i   =   0 ;   i   <   n ;   + + i )   {  
         r [ i ]   =   v a r i a t e _ g e n e r a t o r ( ) ;  
     }  
 }  
  
 t e m p l a t e  
 v o i d   c a f f e _ r n g _ b e r n o u l l i < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e   p ,   i n t *   r ) ;  
  
 t e m p l a t e  
 v o i d   c a f f e _ r n g _ b e r n o u l l i < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t   p ,   i n t *   r ) ;  
  
 t e m p l a t e   < t y p e n a m e   D t y p e >  
 v o i d   c a f f e _ r n g _ b e r n o u l l i ( c o n s t   i n t   n ,   c o n s t   D t y p e   p ,   u n s i g n e d   i n t *   r )   {  
     C H E C K _ G E ( n ,   0 ) ;  
     C H E C K ( r ) ;  
     C H E C K _ G E ( p ,   0 ) ;  
     C H E C K _ L E ( p ,   1 ) ;  
     b o o s t : : b e r n o u l l i _ d i s t r i b u t i o n < D t y p e >   r a n d o m _ d i s t r i b u t i o n ( p ) ;  
     b o o s t : : v a r i a t e _ g e n e r a t o r < c a f f e : : r n g _ t * ,   b o o s t : : b e r n o u l l i _ d i s t r i b u t i o n < D t y p e >   >  
             v a r i a t e _ g e n e r a t o r ( c a f f e _ r n g ( ) ,   r a n d o m _ d i s t r i b u t i o n ) ;  
     f o r   ( i n t   i   =   0 ;   i   <   n ;   + + i )   {  
         r [ i ]   =   s t a t i c _ c a s t < u n s i g n e d   i n t > ( v a r i a t e _ g e n e r a t o r ( ) ) ;  
     }  
 }  
  
 t e m p l a t e  
 v o i d   c a f f e _ r n g _ b e r n o u l l i < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e   p ,   u n s i g n e d   i n t *   r ) ;  
  
 t e m p l a t e  
 v o i d   c a f f e _ r n g _ b e r n o u l l i < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t   p ,   u n s i g n e d   i n t *   r ) ;  
  
 t e m p l a t e   < >  
 f l o a t   c a f f e _ c p u _ s t r i d e d _ d o t < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   x ,   c o n s t   i n t   i n c x ,  
         c o n s t   f l o a t *   y ,   c o n s t   i n t   i n c y )   {  
     r e t u r n   c b l a s _ s d o t ( n ,   x ,   i n c x ,   y ,   i n c y ) ;  
 }  
  
 t e m p l a t e   < >  
 d o u b l e   c a f f e _ c p u _ s t r i d e d _ d o t < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   x ,  
         c o n s t   i n t   i n c x ,   c o n s t   d o u b l e *   y ,   c o n s t   i n t   i n c y )   {  
     r e t u r n   c b l a s _ d d o t ( n ,   x ,   i n c x ,   y ,   i n c y ) ;  
 }  
  
 t e m p l a t e   < t y p e n a m e   D t y p e >  
 D t y p e   c a f f e _ c p u _ d o t ( c o n s t   i n t   n ,   c o n s t   D t y p e *   x ,   c o n s t   D t y p e *   y )   {  
     r e t u r n   c a f f e _ c p u _ s t r i d e d _ d o t ( n ,   x ,   1 ,   y ,   1 ) ;  
 }  
  
 t e m p l a t e  
 f l o a t   c a f f e _ c p u _ d o t < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   x ,   c o n s t   f l o a t *   y ) ;  
  
 t e m p l a t e  
 d o u b l e   c a f f e _ c p u _ d o t < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   x ,   c o n s t   d o u b l e *   y ) ;  
  
 t e m p l a t e   < >  
 f l o a t   c a f f e _ c p u _ a s u m < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t *   x )   {  
     r e t u r n   c b l a s _ s a s u m ( n ,   x ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 d o u b l e   c a f f e _ c p u _ a s u m < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e *   x )   {  
     r e t u r n   c b l a s _ d a s u m ( n ,   x ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ c p u _ s c a l e < f l o a t > ( c o n s t   i n t   n ,   c o n s t   f l o a t   a l p h a ,   c o n s t   f l o a t   * x ,  
                                                         f l o a t *   y )   {  
     c b l a s _ s c o p y ( n ,   x ,   1 ,   y ,   1 ) ;  
     c b l a s _ s s c a l ( n ,   a l p h a ,   y ,   1 ) ;  
 }  
  
 t e m p l a t e   < >  
 v o i d   c a f f e _ c p u _ s c a l e < d o u b l e > ( c o n s t   i n t   n ,   c o n s t   d o u b l e   a l p h a ,   c o n s t   d o u b l e   * x ,  
                                                           d o u b l e *   y )   {  
     c b l a s _ d c o p y ( n ,   x ,   1 ,   y ,   1 ) ;  
     c b l a s _ d s c a l ( n ,   a l p h a ,   y ,   1 ) ;  
 }  
  
 }     / /   n a m e s p a c e   c a f f e  
 