<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?>
<!-- //底部模板 -->
<div class="footer w960 center mt1 clear" style="background:#2b3236;width:100%">
	<!-- 
		为了支持织梦团队的发展,请您保留织梦内容管理系统的链接信息.
		我们对支持织梦团队发展的朋友表示真心的感谢!织梦因您更精彩!
	-->
	<form action="/plus/diy.php" enctype="multipart/form-data" method="post">
	<input type="hidden" name="action" value="post" />
	<input type="hidden" name="diyid" value="1" />
	<input type="hidden" name="do" value="2" />

	<div class="footer_content">
		<div class="footer_left">
			<div class="footer_liuyan">
				<div style="width:96%;float:left;overflow:hidden">
				<h1>预约设计</h1>
				<ul>
					<li>
						<select name='menmian'>
							<option value="">请选择分店</option>
							<option value="广州总部">广州总部</option>
							<option value="上海分部">上海分部</option>
							<option value="武汉分部">武汉分部</option>
						</select>
					</li>
					<li><input type="text" name='mianji' id='mianji' placeholder="建筑面积"/></li>
					<li><input type="text" name='iphon' id='iphon' placeholder="请填写您的手机号码"/></li>
					<input type="hidden" name="dede_fields" value="menmian,select;mianji,text;iphon,text" />
					<input type="hidden" name="dede_fieldshash" value="6461e65d0c50f0bd74f3f262e4fe52c4" />
					<li><input type="submit" value="立即预约" class="submit"/></li>
				</ul>
				</div>
				<img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/footer-border.jpg"/>
			</div>
			
			<div class="footer_link">
				<h1>友情链接</h1>
				<ul style="border-right:1% dashed #fff;overflow:hidden">
					<?php
$atts = array();
$atts['tagname'] = 'flinktype';
$atts['typeid'] = '1';
$atts['linktype'] = '2';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{

$atts = array();
$atts['tagname'] = 'flink';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{

}
}

}
}
?>
				</ul>
			</div>
		</div>
		
	   <div class="footer_right">
			<img style="height:300px" src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/footer-code-tel.jpg"/>
	   </div>
   </div>
   <form>
</div>
<div class="footer-banquan">
Powered by <?php echo $GLOBALS['cfg_webname']; ?> &copy; 2004-2018 <br />
<div class="copyright"><?php echo $GLOBALS['cfg_powerby']; ?>&nbsp;&nbsp;仿冒必究&nbsp;&nbsp;<a href="http://www.miitbeian.gov.cn" target="_blank"><?php echo $GLOBALS['cfg_beian']; ?></a></div>
</div>